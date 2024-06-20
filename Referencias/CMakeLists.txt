cmake_minimum_required(VERSION 3.24)
project(Referencias)

set(CMAKE_CXX_STANDARD 17)

add_executable(Referencias main.cpp trabajo.cpp trabajo.h Inventario.cpp PersonajeVideojuego.h PersonajeVideojuego.cpp Mago.h Mago.cpp Guerrero.h Guerrero.cpp Enemigo.cpp)
