cmake_minimum_required(VERSION 3.3)
project(ptmud_scratch
        VERSION 0.0.1
        LANGUAGES CXX)

if(NOT PTMUD_scratch_VERSION_MAJOR)
    set(PTMUD_scratch_VERSION_MAJOR 0)
endif()
if(NOT PTMUD_scratch_VERSION_MINOR)
    set(PTMUD_scratch_VERSION_MINOR 1)
endif()
if(NOT PTMUD_scratch_VERSION_PATCH)
    set(PTMUD_scratch_VERSION_PATCH 0)
endif()
if(NOT PTMUD_scratch_VERSION_EXTRA)
    set(PTMUD_scratch_VERSION_EXTRA "")
endif()

add_compile_options(-std=c++1z -Wall -Wextra -Wpedantic -Weffc++ -pipe -pthread)

# TODO: This doesn't work!
# find_package(Threads REQUIRED)

#####################################################################

set(Boost_USE_MULTITHREADED ON)
set(BOOST_COMPONENTS system)

set(HAVE_STANALONE_ASIO FALSE)

# First try to find Boost ASIO separately
find_package(Boost 1.57.0
        COMPONENTS asio)
if(NOT Boost_ASIO_FOUND)
    # Don't have Boost ASIO, look for the non-boost ASIO library
    find_path(ASIO_INCLUDE_DIR
            asio/io_service.hpp
            HINTS ${CMAKE_INCLUDE_PATH})
    if("${ASIO_INCLUDE_DIR}" STREQUAL "ASIO_INCLUDE_DIR-NOTFOUND")
        message(FATAL "ASIO not found")
    endif()
    set(HAVE_STANDALONE_ASIO TRUE)
else()
    # Boost ASIO found, add it to the set of components we search for
    set(BOOST_COMPONENTS ${BOOST_COMPONENTS} asio)
endif()

# Find all the required Boost components
find_package(Boost 1.57.0
        REQUIRED COMPONENTS ${BOOST_COMPONENTS})

include_directories(${Boost_INCLUDE_DIR})

#####################################################################

add_subdirectory(src)

configure_file(
        "${PROJECT_SOURCE_DIR}/src/autoconf.h.in"
        "${PROJECT_SOURCE_DIR}/src/autoconf.h")
