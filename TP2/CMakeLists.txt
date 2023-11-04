cmake_minimum_required(VERSION 3.26)
project(TP2_Prog_CIR2)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(exo1)
add_subdirectory(exo2)
add_subdirectory(exo3)
add_subdirectory(exo4)

add_executable(TP2_Prog_CIR2
        exo1/exo1.cpp
        exo2/exo2.cpp
        exo3/exo3.cpp
        exo4/exo4.cpp
        main.cpp)