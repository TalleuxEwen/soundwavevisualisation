cmake_minimum_required(VERSION 3.25.1)
project(soundwavevisualisation)

set(CMAKE_CXX_STANDARD 14)

add_executable(soundwavevisualisation
        src/main.cpp
        src/ArgumentsHandling/ArgumentsHandling.cpp
        src/ArgumentsHandling/ArgumentsHandling.hpp
        src/AudioFile/AudioFile.cpp
        src/AudioFile/AudioFile.hpp
        src/AudioFile/Header.cpp
        src/AudioFile/Header.hpp)
