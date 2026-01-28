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
        part_1/ft_atoi.c
        part_1/ft_memcpy.c
        part_1/ft_memmove.c
        part_1/ft_strlcpy.c
        part_1/ft_strlcat.c
        part_1/ft_strrchr.c
        part_1/ft_memchr.c
        part_1/ft_memcmp.c
        part_1/ft_strnstr.c
        part_1/ft_strdup.c
        part_1/ft_calloc.c)

# Тестовый main
add_executable(test_main main.c)
target_link_libraries(test_main ft)
