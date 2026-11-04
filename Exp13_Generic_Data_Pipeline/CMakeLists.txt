cmake_minimum_required(VERSION 3.20)
project(DataPipeline)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(DataPipeline
    main.cpp
    pipeline.cppm
)
