cmake_minimum_required(VERSION 3.22)
project(c_kieli)

set(CMAKE_CXX_STANDARD 14)

include_directories(c/teht1)
include_directories(c/teht3)
include_directories(c/teht4)
include_directories(c/teht5)
include_directories(cpp/teht3)

add_executable(c_kieli
        c/teht1/main.c
        c/teht1/userInput.c
        c/teht1/userInput.h
        c/teht2/main.c
        c/teht2b/main.c
        c/teht3/main.c
        c/teht3/main.h
        c/teht4/main.c
        c/teht4/main.h
        c/teht5/matkakorttiluuranko.c
        c/teht5/matkakorttiluuranko.h
        cpp/teht1/main.cpp
        cpp/teht3/main.cpp
        cpp/teht3/main.h
        cpp/teht3/Travel.h
        cpp/teht3/TravelCard.cpp
        cpp/teht3/TravelCard.h
        cpp/teht3/TravelStatus.h)
