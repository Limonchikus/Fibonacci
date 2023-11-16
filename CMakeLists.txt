cmake_minimum_required(VERSION 3.18)
project(
    lesson3
    VERSION 0.0.0
    DESCRIPTION "First project"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_BUILD_TYPE Debug)

add_executable(lesson3 main.cpp) # Эта команда создает исполняемый файл с именем lesson3 из исходного файла main.cpp

# Если вы хотите добавить библиотеки, используйте следующие команды и раскомментируйте их
# add_library(lesson3 STATIC library.cpp) # Для статической библиотеки
# add_library(lesson3 SHARED library.cpp) # Для динамической библиотеки
