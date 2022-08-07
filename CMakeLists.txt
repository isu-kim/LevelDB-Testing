cmake_minimum_required(VERSION 3.22)
project(leveldbTest)

find_package(leveldb CONFIG REQUIRED)

add_executable(leveldbTest
	main.cpp
	dbTest.cpp
	)

target_link_libraries(leveldbTest leveldb)
