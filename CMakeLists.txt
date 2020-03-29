cmake_minimum_required(VERSION 3.10.2)
project(Cards)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cards main.cpp src/Deck.cpp include/Deck.h src/Card.cpp include/Card.h)