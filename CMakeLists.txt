cmake_minimum_required(VERSION 3.17)
project(test)

set(CMAKE_C_STANDARD 98)
set(CMAKE_C_FLAGS "-Wall -Werror -Wextra")


#include_directories(
#        Module_00/
#        Module_00/ex01
#)
#link_directories(
#        Module_00/
#        Module_00/ex01
#        )
#
#set(GLOB ex00_files Module_00/ex01/*.cpp)
#
#add_executable(module00_ex01
#        Module_00/ex01/Contact.cpp
#        Module_00/ex01/PhoneBook.cpp
#        Module_00/ex01/ex01.cpp
#        )



#include_directories(
#        Module_01/
#        Module_01/ex00/
#)
#link_directories(
#        Module_01/
#        Module_01/ex00/
#        )
#
#add_executable(module01_ex00
#        Module_01/ex00/Pony.cpp
#        Module_01/ex00/main.cpp
#        )
#
#

#--------MODULE01-------------------------------------------------------------------
#set(GLOB SOURCE_FILES "Module_01/ex02/*.cpp")
file(GLOB SOURCE_FILES_EX02 "Module_01/ex02/*.cpp")
file(GLOB SOURCE_FILES_EX03 "Module_01/ex03/*.cpp")
file(GLOB SOURCE_FILES_EX04 "Module_01/ex04/*.cpp")
file(GLOB SOURCE_FILES_EX05 "Module_01/ex05/*.cpp")
file(GLOB SOURCE_FILES_EX06 "Module_01/ex06/*.cpp")
file(GLOB SOURCE_FILES_EX07 "Module_01/ex07/*.cpp")

include_directories(
        Module_01/
#        Module_01/ex02/
#        Module_01/ex03/
#        Module_01/ex04/
#        Module_01/ex05/
#        Module_01/ex06/
        Module_01/ex07/
)

link_directories(
        Module_01/
#        Module_01/ex02/
#        Module_01/ex03/
#        Module_01/ex04/
#        Module_01/ex05/
#        Module_01/ex06/
        Module_01/ex07/
)

add_executable(module01_ex02
        ${SOURCE_FILES_EX02}
        )

add_executable(module01_ex03
        ${SOURCE_FILES_EX03}
        )

add_executable(module01_ex04
        ${SOURCE_FILES_EX04}
        )
add_executable(module01_ex05
        ${SOURCE_FILES_EX05}
        )

add_executable(module01_ex06
        ${SOURCE_FILES_EX06}
        )

add_executable(module01_ex07
        ${SOURCE_FILES_EX07}
        )


#-----------------------------------------------

#---MODULE 02--------------------------------------------

include_directories(
        Module_02/
        Module_02/ex01/
)

link_directories(
        Module_02/
#        Module_02/ex00/
        Module_02/ex01/
)

file(GLOB SOURCE_FILES_MODULE_02_EX00 "Module_02/ex00/*.cpp")
file(GLOB SOURCE_FILES_MODULE_02_EX01 "Module_02/ex01/*.cpp")

add_executable(module02_ex01
#        ${SOURCE_FILES_MODULE_02_EX00}
        ${SOURCE_FILES_MODULE_02_EX01}
        )

#-----------------------------------------------


#---MODULE 03--------------------------------------------

include_directories(
#        Module_03/
#        Module_03/ex00
#        Module_03/ex01
#        Module_03/ex02
        Module_03/ex03
)


link_directories(
#        Module_03/
#        Module_03/ex00/
#        Module_03/ex01/
#        Module_03/ex02/
        Module_03/ex03/
)

#file(GLOB SOURCE_FILES_MODULE_03_EX00 "Module_03/ex00/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_03_EX01 "Module_03/ex01/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_03_EX02 "Module_03/ex02/*.cpp")
file(GLOB SOURCE_FILES_MODULE_03_EX03 "Module_03/ex03/*.cpp")

#add_executable(module03_ex00
#        ${SOURCE_FILES_MODULE_03_EX00}
#        ${SOURCE_FILES_MODULE_03_EX01}
#        )


#add_executable(module03_ex01
#        ${SOURCE_FILES_MODULE_03_EX01}
#        )

#
#add_executable(module03_ex02
#        ${SOURCE_FILES_MODULE_03_EX02}
#        )


add_executable(module03_ex03
        ${SOURCE_FILES_MODULE_03_EX03}
        )

#-----------------------------------------------
