# Copyright (c) 2006, 2016, Oracle and/or its affiliates. All rights reserved.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; version 2 of the License.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA

IF(WIN32)
  # CMake 2.8.12 is needed for Visual Studio 2013
  CMAKE_MINIMUM_REQUIRED(VERSION 2.8.12)
ELSE()
  # There's a bug in unzipping prior to 2.8.2
  CMAKE_MINIMUM_REQUIRED(VERSION 2.8.2)
ENDIF()

# We use CMAKE_SHARED_LIBRARY_<Lang>_FLAGS. See cmake --help-policy CMP0018
IF(CMAKE_VERSION VERSION_GREATER "2.8.8")
  CMAKE_POLICY(SET CMP0018 OLD)
ENDIF()

# We use PROPERTIES LINK_INTERFACE_LIBRARIES. See cmake --help-policy CMP0022
IF(CMAKE_VERSION VERSION_EQUAL "2.8.12" OR
   CMAKE_VERSION VERSION_GREATER "2.8.12")
 CMAKE_POLICY(SET CMP0022 OLD)
ENDIF()

# We use the LOCATION target property (CMP0026)
# and get_target_property() for non-existent targets (CMP0045)
# and INSTALL_NAME_DIR (CMP0042)
IF(CMAKE_VERSION VERSION_EQUAL "3.0.0" OR
   CMAKE_VERSION VERSION_GREATER "3.0.0")
 CMAKE_POLICY(SET CMP0026 OLD)
 CMAKE_POLICY(SET CMP0045 OLD)
 CMAKE_POLICY(SET CMP0042 OLD)
ENDIF()

MESSAGE(STATUS "Running cmake version ${CMAKE_VERSION}")

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

# First, decide about build type (debug or release)
# If cmake is invoked with -DCMAKE_BUILD_TYPE,
# respect user wishes and do not (re)define CMAKE_BUILD_TYPE. If WITH_DEBUG
# is given, set CMAKE_BUILD_TYPE = Debug. Otherwise, use Relwithdebinfo.

IF(DEFINED CMAKE_BUILD_TYPE)
  SET(HAVE_CMAKE_BUILD_TYPE TRUE)
ENDIF()

OPTION(WITH_DEBUG "Use dbug/safemutex" OFF)

# Distinguish between community and non-community builds, with the
# default being a community build. This does not impact the feature
# set that will be compiled in; it's merely provided as a hint to
# custom packaging steps.
OPTION(COMMUNITY_BUILD "Set to true if this is a community build" ON)

# Use a default manufacturer if no manufacturer was identified.
SET(MANUFACTURER_DOCSTRING
  "Set the entity that appears as the manufacturer of packages that support a manufacturer field.")
IF(NOT DEFINED MANUFACTURER)
  SET(MANUFACTURER "Built from Source" CACHE  STRING ${MANUFACTURER_DOCSTRING})
  MARK_AS_ADVANCED(MANUFACTURER)
ENDIF()

# We choose to provide WITH_DEBUG as alias to standard CMAKE_BUILD_TYPE=Debug
# which turns out to be not trivial, as this involves synchronization
# between CMAKE_BUILD_TYPE and WITH_DEBUG. Besides, we have to deal with cases
# where WITH_DEBUG is  reset from ON to OFF  and here we need to reset
# CMAKE_BUILD_TYPE to either none or default RelWithDebInfo

SET(BUILDTYPE_DOCSTRING
 "Choose the type of build, options are: None(CMAKE_CXX_FLAGS or
 CMAKE_C_FLAGS used) Debug Release RelWithDebInfo MinSizeRel")

    SET(WITH_PIC ON CACHE BOOL "Compile with PIC")
IF(WITH_DEBUG)
  SET(CMAKE_BUILD_TYPE "Debug" CACHE STRING ${BUILDTYPE_DOCSTRING} FORCE)
  IF(UNIX AND NOT APPLE)
    # Compiling with PIC speeds up embedded build, on PIC sensitive systems
    # Predefine it to ON, in case user chooses to build embedded.
    SET(WITH_PIC ON CACHE BOOL "Compile with PIC")
  ENDIF()
  SET(OLD_WITH_DEBUG 1 CACHE INTERNAL "" FORCE)
ELSEIF(NOT HAVE_CMAKE_BUILD_TYPE OR OLD_WITH_DEBUG)
  IF(CMAKE_BUILD_TYPE MATCHES "Debug" OR NOT HAVE_CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING
       ${BUILDTYPE_DOCSTRING} FORCE)
  ENDIF()
  SET(OLD_WITH_DEBUG 0 CACHE INTERNAL "" FORCE)
ENDIF()

# Optionally set project name, e.g.
# foo.xcodeproj (mac) or foo.sln (windows)
SET(MYSQL_PROJECT_NAME_DOCSTRING "MySQL project name")
IF(DEFINED MYSQL_PROJECT_NAME)
  SET(MYSQL_PROJECT_NAME ${MYSQL_PROJECT_NAME} CACHE STRING
      ${MYSQL_PROJECT_NAME_DOCSTRING} FORCE)
ELSE()
  SET(MYSQL_PROJECT_NAME "LibMySQL" CACHE STRING
      ${MYSQL_PROJECT_NAME_DOCSTRING} FORCE)
  MARK_AS_ADVANCED(MYSQL_PROJECT_NAME)
ENDIF()
PROJECT(${MYSQL_PROJECT_NAME})

# Maintainer mode is default on only for debug builds using GCC/G++
IF(CMAKE_BUILD_TYPE MATCHES "Debug" OR WITH_DEBUG)
  IF(CMAKE_COMPILER_IS_GNUCC AND CMAKE_COMPILER_IS_GNUCXX)
    SET(MYSQL_MAINTAINER_MODE ON CACHE BOOL
        "MySQL maintainer-specific development environment")
  ENDIF()
ENDIF()

OPTION(FORCE_UNSUPPORTED_COMPILER "Disable compiler version checks" ON)
MARK_AS_ADVANCED(FORCE_UNSUPPORTED_COMPILER)

OPTION(WITH_DEFAULT_COMPILER_OPTIONS
  "Use flags from cmake/build_configurations/compiler_options.cmake"
  ON)
OPTION(WITH_DEFAULT_FEATURE_SET
  "Use feature set in cmake/build_configurations/feature_set.cmake"
  ON)
IF(BUILD_CONFIG)
  INCLUDE(
  ${CMAKE_SOURCE_DIR}/cmake/build_configurations/${BUILD_CONFIG}.cmake)
ENDIF()

#cmake on 64bit windows/mac/solaris doesn't set CMAKE_SYSTEM_PROCESSOR correctly
SET(MYSQL_MACHINE_TYPE ${CMAKE_SYSTEM_PROCESSOR})


# Include the platform-specific file. To allow exceptions, this code
# looks for files in order of how specific they are. If there is, for
# example, a generic Linux.cmake and a version-specific
# Linux-2.6.28-11-generic, it will pick Linux-2.6.28-11-generic and
# include it. It is then up to the file writer to include the generic
# version if necessary.
FOREACH(_base
    ${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_VERSION}-${CMAKE_SYSTEM_PROCESSOR}
    ${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_VERSION}
    ${CMAKE_SYSTEM_NAME})
  SET(_file ${CMAKE_SOURCE_DIR}/cmake/os/${_base}.cmake)
  IF(EXISTS ${_file})
    INCLUDE(${_file})
    BREAK()
  ENDIF()
ENDFOREACH()


# Following autotools tradition, add preprocessor definitions
# specified in environment variable CPPFLAGS
IF(DEFINED ENV{CPPFLAGS})
  ADD_DEFINITIONS($ENV{CPPFLAGS})
ENDIF()

IF(CMAKE_SYSTEM_NAME MATCHES "SunOS")
  IF (NOT "${CMAKE_C_FLAGS}${CMAKE_CXX_FLAGS}" MATCHES "-m32|-m64")
    EXECUTE_PROCESS(COMMAND isainfo -b
      OUTPUT_VARIABLE ISAINFO_B
      RESULT_VARIABLE ISAINFO_B_RES
      OUTPUT_STRIP_TRAILING_WHITESPACE)
    IF(ISAINFO_B_RES)
      MESSAGE(STATUS "Failed to run isainfo -b to determine arch bits: "
        "${ISAINFO_B_RES}. Falling back to compiler's default.")
    ELSE()
      MESSAGE("Adding -m${ISAINFO_B}")
      SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m${ISAINFO_B}")
      SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m${ISAINFO_B}")
    ENDIF()
  ENDIF()
ENDIF()

INCLUDE(CheckTypeSize)
CHECK_TYPE_SIZE("void *" SIZEOF_VOIDP)
MESSAGE(STATUS "SIZEOF_VOIDP ${SIZEOF_VOIDP}")
IF(WITH_DEFAULT_COMPILER_OPTIONS)
  INCLUDE(${CMAKE_SOURCE_DIR}/cmake/build_configurations/compiler_options.cmake)
ENDIF()
IF(WITH_DEFAULT_FEATURE_SET)
  INCLUDE(${CMAKE_SOURCE_DIR}/cmake/build_configurations/feature_set.cmake)
ENDIF()

# Add macros
INCLUDE(character_sets)
INCLUDE(cpu_info)
INCLUDE(zlib)
INCLUDE(ssl)
INCLUDE(mysql_version)
INCLUDE(libutils)
INCLUDE(dtrace)
#INCLUDE(plugin)
INCLUDE(install_macros)
INCLUDE(install_layout)
INCLUDE(mysql_add_executable)

# Handle options
OPTION(DISABLE_SHARED
 "Don't build shared libraries, compile code as position-dependent" OFF)
MARK_AS_ADVANCED(DISABLE_SHARED)
IF(DISABLE_SHARED)
  SET(WITHOUT_DYNAMIC_PLUGINS 1)
ENDIF()
OPTION(ENABLED_PROFILING "Enable profiling" ON)
SET(WITHOUT_SERVER ON)
IF(UNIX)
  OPTION(WITH_VALGRIND "Valgrind instrumentation" OFF)
ENDIF()
IF(WIN32)
  OPTION(WITH_MSCRT_DEBUG "MS Visual Studio Debug CRT instrumentation" OFF)
ENDIF()
OPTION (WITH_UNIT_TESTS "Compile MySQL with unit tests" OFF)

include(CheckCSourceCompiles)
include(CheckCXXSourceCompiles)
# We need some extra FAIL_REGEX patterns
# Note that CHECK_C_SOURCE_COMPILES is a misnomer, it will also link.
MACRO (MY_CHECK_C_COMPILER_FLAG FLAG RESULT)
  SET(SAVE_CMAKE_REQUIRED_FLAGS "${CMAKE_REQUIRED_FLAGS}")
  SET(CMAKE_REQUIRED_FLAGS "${CMAKE_REQUIRED_FLAGS} ${FLAG}")
  CHECK_C_SOURCE_COMPILES("int main(void) { return 0; }" ${RESULT}
    FAIL_REGEX "argument unused during compilation"
    FAIL_REGEX "unsupported .*option"
    FAIL_REGEX "unknown .*option"
    FAIL_REGEX "unrecognized .*option"
    FAIL_REGEX "ignoring unknown option"
    FAIL_REGEX "[Ww]arning: [Oo]ption"
    FAIL_REGEX "error: visibility"
    FAIL_REGEX "warning: visibility"
    )
  SET(CMAKE_REQUIRED_FLAGS "${SAVE_CMAKE_REQUIRED_FLAGS}")
ENDMACRO()

MACRO (MY_CHECK_CXX_COMPILER_FLAG FLAG RESULT)
  SET(SAVE_CMAKE_REQUIRED_FLAGS "${CMAKE_REQUIRED_FLAGS}")
  SET(CMAKE_REQUIRED_FLAGS "${CMAKE_REQUIRED_FLAGS} ${FLAG}")
  CHECK_CXX_SOURCE_COMPILES("int main(void) { return 0; }" ${RESULT}
    FAIL_REGEX "argument unused during compilation"
    FAIL_REGEX "unsupported .*option"
    FAIL_REGEX "unknown .*option"
    FAIL_REGEX "unrecognized .*option"
    FAIL_REGEX "ignoring unknown option"
    FAIL_REGEX "[Ww]arning: [Oo]ption"
    FAIL_REGEX "error: visibility"
    FAIL_REGEX "warning: visibility"
    )
  SET(CMAKE_REQUIRED_FLAGS "${SAVE_CMAKE_REQUIRED_FLAGS}")
ENDMACRO()

MACRO(MY_SANITIZER_CHECK SAN_OPT RESULT)
  MY_CHECK_C_COMPILER_FLAG("${SAN_OPT}" C_RESULT)
  MY_CHECK_CXX_COMPILER_FLAG("${SAN_OPT}" CXX_RESULT)
  IF(C_RESULT AND CXX_RESULT)
    # We switch on basic optimization also for debug builds.
    # With optimization we may get some warnings, so we switch off -Werror
    SET(CMAKE_C_FLAGS_DEBUG
      "${CMAKE_C_FLAGS_DEBUG} ${SAN_OPT} -O1 -Wno-error -fPIC")
    SET(CMAKE_C_FLAGS_RELWITHDEBINFO
      "${CMAKE_C_FLAGS_RELWITHDEBINFO} ${SAN_OPT} -fPIC")
    SET(CMAKE_CXX_FLAGS_DEBUG
      "${CMAKE_CXX_FLAGS_DEBUG} ${SAN_OPT} -O1 -Wno-error -fPIC")
    SET(CMAKE_CXX_FLAGS_RELWITHDEBINFO
      "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} ${SAN_OPT} -fPIC")
    SET(${RESULT} 1)
  ELSE()
    SET(${RESULT} 0)
  ENDIF()
ENDMACRO()

OPTION(WITH_ASAN "Enable address sanitizer" OFF)
IF(WITH_ASAN)
  MY_SANITIZER_CHECK("-fsanitize=address" WITH_ASAN_OK)
  IF(WITH_ASAN_OK)
    SET(HAVE_ASAN 1)
  ELSE()
    MESSAGE(FATAL_ERROR "Do not know how to enable address sanitizer")
  ENDIF()
ENDIF()

OPTION(WITH_MSAN "Enable memory sanitizer" OFF)
IF(WITH_MSAN)
  MY_SANITIZER_CHECK("-fsanitize=memory -fsanitize-memory-track-origins"
                     WITH_MSAN_OK)
  IF(NOT WITH_MSAN_OK)
    MESSAGE(FATAL_ERROR "Do not know how to enable memory sanitizer")
  ENDIF()
ENDIF()

OPTION(WITH_UBSAN "Enable undefined behavior sanitizer" OFF)
IF(WITH_UBSAN)
  MY_SANITIZER_CHECK("-fsanitize=undefined" WITH_UBSAN_OK)
  IF(NOT WITH_UBSAN_OK)
    MESSAGE(FATAL_ERROR
            "Do not know how to enable undefined behavior sanitizer")
  ELSE()
    MESSAGE(WARNING
            "Note that Undefined Behavior support is currently experimental.")
  ENDIF()
ENDIF()

IF(WITH_ASAN AND WITH_MSAN)
  MESSAGE(FATAL_ERROR
          "Cannot use AddressSanitizer and MemorySanitizer together")
ENDIF()


OPTION(ENABLE_DEBUG_SYNC "Enable debug sync (debug builds only)" ON)
IF(ENABLE_DEBUG_SYNC)
  SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DENABLED_DEBUG_SYNC")
  SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DENABLED_DEBUG_SYNC")
ENDIF()

# Older versions of ccache must be disabled: export CCACHE_DISABLE=1
# See http://www.cmake.org/Wiki/CTest/Coverage
OPTION(ENABLE_GCOV "Enable gcov (debug, Linux builds only)" OFF)
IF (ENABLE_GCOV AND NOT WIN32 AND NOT APPLE)
  SET(CMAKE_CXX_FLAGS_DEBUG
    "${CMAKE_CXX_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage -DHAVE_GCOV")
  SET(CMAKE_C_FLAGS_DEBUG
    "${CMAKE_C_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage -DHAVE_GCOV")
  SET(CMAKE_EXE_LINKER_FLAGS_DEBUG
    "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -fprofile-arcs -ftest-coverage -lgcov")
ENDIF()

OPTION(ENABLE_GPROF "Enable gprof (optimized, Linux builds only)" OFF)
IF (ENABLE_GPROF AND NOT WIN32 AND NOT APPLE)
  SET(CMAKE_C_FLAGS_RELWITHDEBINFO
    "${CMAKE_C_FLAGS_RELWITHDEBINFO} -pg")
  SET(CMAKE_CXX_FLAGS_RELWITHDEBINFO
    "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -pg")
  SET(CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
    "${CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO} -pg")
ENDIF()

OPTION(ENABLED_LOCAL_INFILE
 "If we should enable LOAD DATA LOCAL by default" ${IF_WIN})
MARK_AS_ADVANCED(ENABLED_LOCAL_INFILE)

OPTION(WITH_FAST_MUTEXES "Compile with fast mutexes" OFF)
MARK_AS_ADVANCED(WITH_FAST_MUTEXES)

#
# Options related to client-side protocol tracing
#

OPTION(WITH_CLIENT_PROTOCOL_TRACING
  "Support for client-side protocol tracing plugins" ON)
OPTION(WITH_TEST_TRACE_PLUGIN
  "Have a built-in test protocol trace plugin in libmysql (requires WITH_CLIENT_PROTOCOL_TRACING option)" OFF)

# Sanity checks for protocol tracing options

IF(WITH_TEST_TRACE_PLUGIN AND NOT WITH_CLIENT_PROTOCOL_TRACING)
MESSAGE("WARNING: Test trace plugin was selected but client protocol tracing infrastructure is not enabled - ignoring")
SET(WITH_TEST_TRACE_PLUGIN 0)
ENDIF()

IF(WITH_TEST_TRACE_PLUGIN AND NOT CMAKE_BUILD_TYPE MATCHES "Debug")
  MESSAGE(SEND_ERROR
          "Test trace plugin was selected but it can be included only in debug binaries.
          Set WITH_TEST_TRACE_PLUGIN to OFF or WITH_DEBUG to ON.")
ENDIF()

# Set DBUG_OFF and other optional release-only flags for non-debug project types
FOREACH(BUILD_TYPE RELEASE RELWITHDEBINFO MINSIZEREL)
  FOREACH(LANG C CXX)
    SET(CMAKE_${LANG}_FLAGS_${BUILD_TYPE}
     "${CMAKE_${LANG}_FLAGS_${BUILD_TYPE}} -DDBUG_OFF")
    IF(WITH_FAST_MUTEXES)
      SET(CMAKE_${LANG}_FLAGS_${BUILD_TYPE}
        "${CMAKE_${LANG}_FLAGS_${BUILD_TYPE}} -DMY_PTHREAD_FASTMUTEX=1")
    ENDIF()
  ENDFOREACH()
ENDFOREACH()

IF(NOT CMAKE_BUILD_TYPE
    AND NOT CMAKE_GENERATOR MATCHES "Visual Studio"
    AND NOT CMAKE_GENERATOR MATCHES "Xcode")
    # This is the case of no CMAKE_BUILD_TYPE choosen, typical for VS and Xcode
    # or if custom C flags are set. In VS and Xcode for non-Debug configurations
    # DBUG_OFF is already correctly set.
    ADD_DEFINITIONS(-DDBUG_OFF)
ENDIF()

# Add safemutex for debug configurations
IF(NOT WITH_INNODB_MEMCACHED)
  FOREACH(LANG C CXX)
      SET(CMAKE_${LANG}_FLAGS_DEBUG
          "${CMAKE_${LANG}_FLAGS_DEBUG} -DSAFE_MUTEX")
  ENDFOREACH()
ENDIF()

SET(PKG_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX} CACHE PATH
    "Location where package will install itself on the target system")
MESSAGE(STATUS "Installing to: ${PKG_INSTALL_PREFIX}")


# Set commonly used variables
IF(WIN32)
  SET(DEFAULT_MYSQL_HOME "C:/Program Files/MySQL/MySQL Server ${MYSQL_BASE_VERSION}" )
  SET(SHAREDIR share)
ELSE()
  SET(DEFAULT_MYSQL_HOME ${CMAKE_INSTALL_PREFIX})
  SET(SHAREDIR ${DEFAULT_MYSQL_HOME}/${INSTALL_MYSQLSHAREDIR})
ENDIF()

SET(DEFAULT_BASEDIR "${DEFAULT_MYSQL_HOME}")
IF(INSTALL_MYSQLDATADIR MATCHES "^/.*")
  SET(MYSQL_DATADIR ${INSTALL_MYSQLDATADIR} CACHE PATH "default MySQL data directory")
ELSE()
  SET(MYSQL_DATADIR "${DEFAULT_MYSQL_HOME}/${INSTALL_MYSQLDATADIR}" CACHE PATH "default MySQL data directory")
ENDIF()
IF(INSTALL_MYSQLKEYRINGDIR MATCHES "^/.*")
  SET(MYSQL_KEYRINGDIR ${INSTALL_MYSQLKEYRINGDIR} CACHE PATH "default MySQL keyring directory")
ELSE()
  SET(MYSQL_KEYRINGDIR "${DEFAULT_MYSQL_HOME}/${INSTALL_MYSQLKEYRINGDIR}" CACHE PATH "default MySQL keyring directory")
ENDIF()
SET(DEFAULT_CHARSET_HOME "${DEFAULT_MYSQL_HOME}")
SET(PLUGINDIR "${DEFAULT_MYSQL_HOME}/${INSTALL_PLUGINDIR}")
IF(SYSCONFDIR)
  SET(DEFAULT_SYSCONFDIR "${SYSCONFDIR}")
ENDIF()

IF(WIN32) # P_tmpdir is not defined on Windows as of VS2015.
  SET(TMPDIR "" # So we use empty path as default. In practice TMP/TEMP is used
    CACHE PATH
    "PATH to MySQL TMP dir")
ELSE()
  SET(TMPDIR "P_tmpdir"
    CACHE PATH
    "PATH to MySQL TMP dir. Defaults to the P_tmpdir macro in <stdio.h>")
ENDIF()
IF(TMPDIR STREQUAL "P_tmpdir")
  # Do not quote it, to refer to the P_tmpdir macro.
  SET(DEFAULT_TMPDIR "P_tmpdir")
ELSE()
  # Quote it, to make it a const char string.
  SET(DEFAULT_TMPDIR "\"${TMPDIR}\"")
ENDIF()

# Boost is not needed to build libmysql (yet)
#INCLUDE(cmake/boost.cmake)

# Run platform tests
INCLUDE(configure.cmake)

# Common defines and includes
ADD_DEFINITIONS(-DHAVE_CONFIG_H)
INCLUDE_DIRECTORIES(
  ${CMAKE_CURRENT_BINARY_DIR}/include
  ${CMAKE_SOURCE_DIR}/extra/rapidjson/include
)

# Add bundled or system zlib.
MYSQL_CHECK_ZLIB_WITH_COMPRESS()
# Add bundled yassl/taocrypt or system openssl.
MYSQL_CHECK_SSL()

#
# Setup maintainer mode options by the end. Platform checks are
# not run with the warning options as to not perturb fragile checks
# (i.e. do not make warnings into errors).
#
# Why don't these flags affect the entire build?
# Because things may already have been included with ADD_SUBDIRECTORY
#
OPTION(MYSQL_MAINTAINER_MODE
       "MySQL maintainer-specific development environment" OFF)

INCLUDE(maintainer)

IF(0) #WITH_UNIT_TESTS)
 ENABLE_TESTING()
ENDIF()

IF(0) #NOT WITHOUT_SERVER)
  SET (MYSQLD_STATIC_PLUGIN_LIBS "" CACHE INTERNAL "")
  SET (MYSQLD_STATIC_EMBEDDED_PLUGIN_LIBS "" CACHE INTERNAL "")
  # Add storage engines and plugins.
  CONFIGURE_PLUGINS()
ENDIF()

ADD_SUBDIRECTORY(include)
ADD_SUBDIRECTORY(dbug)
ADD_SUBDIRECTORY(strings)
ADD_SUBDIRECTORY(vio)
ADD_SUBDIRECTORY(regex)
ADD_SUBDIRECTORY(mysys)
ADD_SUBDIRECTORY(mysys_ssl)
ADD_SUBDIRECTORY(libmysql)

IF(0) #WITH_UNIT_TESTS)
  ADD_SUBDIRECTORY(unittest)
  ADD_SUBDIRECTORY(unittest/examples)
  ADD_SUBDIRECTORY(unittest/mytap)
  ADD_SUBDIRECTORY(unittest/mytap/t)
  # Visual Studio 11 needs this extra flag in order to compile gmock.
  IF(WIN32)
    ADD_DEFINITIONS( /D _VARIADIC_MAX=10 )
  ENDIF()
  # libc++ doesn't have tuple in tr1
  IF(HAVE_LLVM_LIBCPP)
    ADD_DEFINITIONS(-DGTEST_USE_OWN_TR1_TUPLE=1)
  ENDIF()
  ADD_SUBDIRECTORY(unittest/gunit)
ENDIF()

SET(WITH_INNOBASE_STORAGE_ENGINE 0)
ADD_SUBDIRECTORY(extra)
ADD_SUBDIRECTORY(scripts)
ADD_SUBDIRECTORY(testclients)
ADD_SUBDIRECTORY(support-files)

#
# Directory where error message database is generated (GenError target)
#
FILE(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/sql/share)

INCLUDE(cmake/abi_check.cmake)
INCLUDE(cmake/tags.cmake)

CONFIGURE_FILE(config.h.cmake   ${CMAKE_BINARY_DIR}/include/my_config.h)
CONFIGURE_FILE(config.h.cmake   ${CMAKE_BINARY_DIR}/include/config.h)
CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/include/mysql_version.h.in
               ${CMAKE_BINARY_DIR}/include/mysql_version.h )
#CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/sql/sql_builtin.cc.in
#    ${CMAKE_BINARY_DIR}/sql/sql_builtin.cc)
CONFIGURE_FILE(
    ${CMAKE_SOURCE_DIR}/cmake/info_macros.cmake.in
    ${CMAKE_BINARY_DIR}/info_macros.cmake @ONLY)

# Handle the "INFO_*" files.
INCLUDE(${CMAKE_BINARY_DIR}/info_macros.cmake)
# Source: This can be done during the cmake phase, all information is
# available, but should be repeated on each "make" just in case someone
# does "cmake ; make ; git pull ; make".
CREATE_INFO_SRC(${CMAKE_BINARY_DIR}/Docs)
ADD_CUSTOM_TARGET(INFO_SRC ALL
  COMMAND ${CMAKE_COMMAND} -P ${CMAKE_SOURCE_DIR}/cmake/info_src.cmake
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)
# Build flags: This must be postponed to the make phase.
ADD_CUSTOM_TARGET(INFO_BIN ALL
  COMMAND ${CMAKE_COMMAND} -P ${CMAKE_SOURCE_DIR}/cmake/info_bin.cmake
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

# Packaging
IF(WIN32)
  SET(CPACK_GENERATOR "ZIP")
ELSE()
  SET(CPACK_GENERATOR "TGZ")
ENDIF()
ADD_SUBDIRECTORY(packaging/WiX)

#
# RPM installs documentation directly from the source tree
#
IF(NOT INSTALL_LAYOUT MATCHES "RPM")
  INSTALL(FILES COPYING LICENSE.mysql
    DESTINATION ${INSTALL_DOCREADMEDIR}
    COMPONENT Readme
    OPTIONAL
  )
  INSTALL(FILES README DESTINATION ${INSTALL_DOCREADMEDIR} COMPONENT Readme)

  INSTALL(
    FILES
      ${CMAKE_BINARY_DIR}/Docs/INFO_SRC
      ${CMAKE_BINARY_DIR}/Docs/INFO_BIN
    DESTINATION ${INSTALL_DOCDIR}
    COMPONENT Documentation
  )
  INSTALL(FILES LICENSE.mysql
    DESTINATION ${INSTALL_DOCREADMEDIR}
    RENAME LICENSE.mysql-debug
    COMPONENT DebugReadme
    OPTIONAL
  )
  INSTALL(FILES COPYING
    DESTINATION ${INSTALL_DOCREADMEDIR}
    RENAME COPYING-debug
    COMPONENT DebugReadme
    OPTIONAL
  )
  INSTALL(FILES README
    DESTINATION ${INSTALL_DOCREADMEDIR}
    RENAME README-debug
    COMPONENT DebugReadme)
ENDIF()

SET(SSL_DEFINES ${SSL_DEFINES} CACHE INTERNAL "pass SSL_DEFINES to client testing utilities")
SET(SSL_INCLUDE_DIRS ${SSL_INCLUDE_DIRS} CACHE INTERNAL "pass SSL_INCLUDE_DIRS to client testing utilities")

#
# A way to install files from other external builds
#
OPTION(EXTRA_INSTALL "Colon separated triplets \"<file/dir>;<instdir>;<component>;...\"")

WHILE(EXTRA_INSTALL)

  LIST(GET EXTRA_INSTALL 0 DIR_OR_FILE)
  IF(NOT DIR_OR_FILE)
    BREAK()   # EXTRA_INSTALL might have an ending ";" causing confusion
  ENDIF()
  FILE(TO_CMAKE_PATH "${DIR_OR_FILE}" DIR_OR_FILE)

  LIST(GET EXTRA_INSTALL 1 REL_INST_DIR)
  IF(NOT REL_INST_DIR)
    MESSAGE(FATAL_ERROR "Install location missing for \"${DIR_OR_FILE}\" in EXTRA_INSTALL")
  ENDIF()
  FILE(TO_CMAKE_PATH "${REL_INST_DIR}" REL_INST_DIR)

  LIST(GET EXTRA_INSTALL 2 COMP_NAME)
  IF(NOT COMP_NAME)
    MESSAGE(FATAL_ERROR "Install component missing for \"${DIR_OR_FILE}\" in EXTRA_INSTALL")
  ENDIF()

  LIST(REMOVE_AT EXTRA_INSTALL 0 1 2)

  MESSAGE(STATUS "Installing \"${DIR_OR_FILE}\" into \"${REL_INST_DIR}\" component \"${COMP_NAME}\"")

  IF(IS_DIRECTORY "${DIR_OR_FILE}")
    INSTALL(DIRECTORY "${DIR_OR_FILE}" DESTINATION ${REL_INST_DIR} COMPONENT ${COMP_NAME})
  ELSEIF(EXISTS "${DIR_OR_FILE}")
    INSTALL(FILES     "${DIR_OR_FILE}" DESTINATION ${REL_INST_DIR} COMPONENT ${COMP_NAME})
  ELSE()
    MESSAGE(FATAL_ERROR "The file or directory \"${DIR_OR_FILE}\" doesn't exist")
  ENDIF()

ENDWHILE()


INCLUDE(CPack)

# C compiler flags consist of:
# CPPFLAGS        Taken from environment, see above.
# ADD_DEFINITIONS In each individual CMakeLists.txt
# CMAKE_C_FLAGS   From command line.
#                 We extend these in maintainer.cmake
# ENV{CFLAGS}     From environment, but environment is ignored if
#                 CMAKE_C_FLAGS is also given on command line
# CMAKE_C_FLAGS_${CMAKE_BUILD_TYPE}
#                 We extend these in compiler_options.cmake
#
# Note that CMakeCache.txt contains cmake builtins for these variables,
# *not* the values that will actually be used:

IF(CMAKE_GENERATOR MATCHES "Makefiles")
  MESSAGE(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
ENDIF()
GET_PROPERTY(cwd_definitions DIRECTORY PROPERTY COMPILE_DEFINITIONS)
MESSAGE(STATUS "COMPILE_DEFINITIONS: ${cwd_definitions}")
MESSAGE(STATUS "CMAKE_C_FLAGS: ${CMAKE_C_FLAGS}")
MESSAGE(STATUS "CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
IF(CMAKE_BUILD_TYPE AND CMAKE_GENERATOR MATCHES "Makefiles")
  STRING(TOUPPER "${CMAKE_BUILD_TYPE}" CMAKEBT)
  MESSAGE(STATUS "CMAKE_C_FLAGS_${CMAKEBT}: ${CMAKE_C_FLAGS_${CMAKEBT}}")
  MESSAGE(STATUS "CMAKE_CXX_FLAGS_${CMAKEBT}: ${CMAKE_CXX_FLAGS_${CMAKEBT}}")
ENDIF()
IF(NOT CMAKE_GENERATOR MATCHES "Makefiles")
  MESSAGE(STATUS "CMAKE_C_FLAGS_DEBUG: ${CMAKE_C_FLAGS_DEBUG}")
  MESSAGE(STATUS "CMAKE_CXX_FLAGS_DEBUG: ${CMAKE_CXX_FLAGS_DEBUG}")
  MESSAGE(STATUS
    "CMAKE_C_FLAGS_RELWITHDEBINFO: ${CMAKE_C_FLAGS_RELWITHDEBINFO}")
  MESSAGE(STATUS
    "CMAKE_CXX_FLAGS_RELWITHDEBINFO: ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
ENDIF()
