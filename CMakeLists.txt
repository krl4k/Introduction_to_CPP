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

#add_executable(module01_ex02
#        ${SOURCE_FILES_EX02}
#        Module_04/ex01/AWeapon.cpp Module_04/ex01/AWeapon.hpp Module_04/ex01/PlasmaRifle.cpp Module_04/ex01/PlasmaRifle.hpp Module_04/ex01/PowerFist.cpp Module_04/ex01/PowerFist.hpp Module_04/ex01/Enemy.cpp Module_04/ex01/Enemy.hpp Module_04/ex01/SuperMutant.cpp Module_04/ex01/SuperMutant.hpp Module_04/ex01/SuperMutant.cpp Module_04/ex01/SuperMutant.hpp Module_04/ex01/RadScorpion.cpp Module_04/ex01/RadScorpion.hpp Module_04/ex01/Character.cpp Module_04/ex01/Character.hpp Module_04/ex01/main.cpp Module_04/ex01/problem_test.cpp Module_04/ex02/ISquad.cpp Module_04/ex02/ISquad.hpp)

#add_executable(module01_ex03
#        ${SOURCE_FILES_EX03}
#        Module_04/ex02/Squad.cpp Module_04/ex02/Squad.hpp Module_04/ex03/AMateria.cpp Module_04/ex03/AMateria.hpp Module_04/ex03/IMateriaSource.hpp Module_04/ex03/IMateriaSource.cpp Module_04/ex03/IMateriaSource.hpp Module_04/ex03/Character.cpp Module_04/ex03/Character.hpp)

add_executable(module01_ex04
        ${SOURCE_FILES_EX04}
        Module_05/ex00/Bureaucrat.cpp Module_05/ex00/Bureaucrat.hpp Module_05/ex00/main.cpp Module_05/ex01/Form.cpp Module_05/ex01/Form.hpp)
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
#        Module_03/ex03
        Module_03/ex04
)


link_directories(
#        Module_03/
#        Module_03/ex00/
#        Module_03/ex01/
#        Module_03/ex02/
#        Module_03/ex03/
        Module_03/ex04/
)

#file(GLOB SOURCE_FILES_MODULE_03_EX00 "Module_03/ex00/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_03_EX01 "Module_03/ex01/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_03_EX02 "Module_03/ex02/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_03_EX03 "Module_03/ex03/*.cpp")
file(GLOB SOURCE_FILES_MODULE_03_EX04 "Module_03/ex04/*.cpp")

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


#add_executable(module03_ex03
#        ${SOURCE_FILES_MODULE_03_EX03}
#        )


add_executable(module03_ex04
        ${SOURCE_FILES_MODULE_03_EX04}
        )

#-----------------------------------------------


#-------------------------------MOdule 04---------------

#file(GLOB SOURCE_FILES_MODULE_04_EX00 "Module_04/ex00/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_04_EX01 "Module_04/ex01/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_04_EX02 "Module_04/ex02/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_04_EX02 "Module_04/ex03/*.cpp")
#
#add_executable(module04_ex00
#        ${SOURCE_FILES_MODULE_04_EX00}
#        Module_04/ex00/Sorcerer.cpp Module_04/ex00/Sorcerer.hpp Module_04/ex00/Victim.cpp Module_04/ex00/Victim.hpp Module_04/ex00/Peon.cpp Module_04/ex00/Peon.hpp)


#add_executable(module04_ex01
#        ${SOURCE_FILES_MODULE_04_EX01}
#        )
#

#add_executable(module04_ex02
#        ${SOURCE_FILES_MODULE_04_EX02}
#)


#add_executable(module04_ex03
#        ${SOURCE_FILES_MODULE_04_EX02}
#        Module_04/ex03/Ice.cpp Module_04/ex03/Ice.hpp Module_04/ex03/Cure.cpp Module_04/ex03/Cure.hpp Module_04/ex03/MateriaSource.cpp Module_04/ex03/MateriaSource.hpp Module_04/ex03/main.cpp)

#file(GLOB SOURCE_FILES_MODULE_05_EX00 "Module_05/ex00/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_05_EX01 "Module_05/ex01/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_05_EX02 "Module_05/ex02/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_05_EX03 "Module_05/ex03/*.cpp")

#add_executable(module05_ex00
#        ${SOURCE_FILES_MODULE_05_EX00}
#        )


#add_executable(module05_ex01
#        ${SOURCE_FILES_MODULE_05_EX01}
#        Module_05/ex01/main.cpp)

#add_executable(module05_ex02
#        ${SOURCE_FILES_MODULE_05_EX02}
#        )


#add_executable(module05_ex03
#        ${SOURCE_FILES_MODULE_05_EX03}
#        )

#file(GLOB SOURCE_FILES_MODULE_06_EX00 "Module_06/ex00/*.cpp")
#file(GLOB SOURCE_FILES_MODULE_06_EX01 "Module_06/ex01/*.cpp")

#add_executable(module06_ex01
#        ${SOURCE_FILES_MODULE_06_EX01}
#        )


#add_executable(module06_ex02
#        Module_06/ex02/main.cpp
#        )


add_executable(module07_ex00
        Module_07/ex00/main.cpp
        )


add_executable(module07_ex01
        Module_07/ex01/main.cpp
        )

#add_executable(module07_ex02
#        Module_07/ex02/Array.cpp
#        Module_07/ex02/main.cpp
#        )

#add_executable(module07_ex02
#        Module_07/ex02/main.cpp
#        Module_07/ex02/Array.cpp
#        )


add_executable(module08_ex00
        Module_08/ex00/main.cpp
        Module_08/ex00/easyfind.hpp
        )


add_executable(module08_ex01
        Module_08/ex01/span.hpp
        Module_08/ex01/span.cpp
        Module_08/ex01/main.cpp
        )

add_executable(module08_ex02
        Module_08/ex02/MutantStack.cpp
        Module_08/ex02/MutantStack.hpp
        Module_08/ex02/main.cpp
#        Module_08/ex02/deque_test.cpp
        )