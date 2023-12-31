﻿# CMakeList.txt : CMake project for CMake_SWIG, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMake_SWIG")

# Add source to this project's executable.
add_library(CMake_SWIG "CMake_SWIG.cpp" "CMake_SWIG.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMake_SWIG PROPERTY CXX_STANDARD 20)
endif()

find_package(SWIG)

include (UseSWIG)
set (SWIG_FILE "go.i")
set_source_files_properties(${SWIG_FILE} PROPERTIES CPLUSPLUS ON)
set(USE_SWIG_DEPENDENCIES TRUE)

set(SWIG_MODULE_NAME "go-adder")
set(CMAKE_SWIG_FLAGS -c++ -go -cgo -intgosize 64)

swig_add_library(${SWIG_MODULE_NAME} TYPE SHARED LANGUAGE go OUTPUT_DIR go_cpp SOURCES ${SWIG_FILE})

    
