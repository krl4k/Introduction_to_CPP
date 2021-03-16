cmake_minimum_required(VERSION 3.17)
project(test)

set(CMAKE_C_STANDARD )
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra")


include_directories(
        Module_00/
        Module_00/ex01
)
link_directories(
        Module_00/
        Module_00/ex01
        )

set(GLOB ex00_files Module_00/ex01/*.cpp)

add_executable(module00_ex01
        Module_00/ex01/Contact.cpp
        Module_00/ex01/PhoneBook.cpp
        Module_00/ex01/ex01.cpp
        )