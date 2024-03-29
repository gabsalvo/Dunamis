cmake_minimum_required(VERSION 3.27)
project(Dunamis C)

set(CMAKE_C_STANDARD 11)

add_library(Dunamis STATIC
        main.c
        main.c
        main.c
        src/Character/hero.c
        src/Character/hero.h)

# Crea l'eseguibile "DunamisExe" (o qualsiasi altro nome preferisci)
add_executable(dunamis
        main.c)

# Linka la libreria "Dunamis" con l'eseguibile "DunamisExe"
target_link_libraries(dunamis Dunamis)