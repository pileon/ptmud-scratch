cmake_minimum_required(VERSION 3.3)
project(ptmud_scratch
        VERSION 0.0.1
        LANGUAGES CXX)

add_compile_options(-std=c++1z -Wall -Wextra -Wpedantic -Weffc++ -pipe -pthread)

add_subdirectory(src)
