cmake_minimum_required(VERSION 3.12)

set(CORE_PROJECT_NAME SimpleCore)

add_library(${CORE_PROJECT_NAME} STATIC
	src/SimpleCore/Utils/test.cpp
	includes/SimpleCore/Utils/test.hpp
)

target_include_directories(${CORE_PROJECT_NAME} PUBLIC includes)
target_compile_features(${CORE_PROJECT_NAME} PUBLIC cxx_std_17)

