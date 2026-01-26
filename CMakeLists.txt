cmake_minimum_required(VERSION 3.20)
project(libft C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Ищем все .c файлы в корне и подпапках
file(GLOB_RECURSE SRC "${CMAKE_SOURCE_DIR}/*.c")

# Заголовки
include_directories(${CMAKE_SOURCE_DIR})

# Библиотека
add_library(ft STATIC ${SRC}
        ft_atoi.c)

# Тестовый main
add_executable(test_main main.c)
target_link_libraries(test_main ft)
