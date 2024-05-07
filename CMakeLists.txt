cmake_minimum_required(VERSION 3.27)
project(Tic_Tac_Toe_CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tic_Tac_Toe_CPP
        main.cpp
        game.h
        game.cpp
        board.h
        board.cpp
        player.h
        player.cpp)
