#!/bin/bash

g++ -Wall -Wextra \
    -o main \
    src/main.cpp src/beeper.cpp \
    `sdl2-config --cflags --libs`
