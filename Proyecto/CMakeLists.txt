cmake_minimum_required(VERSION 3.24)
project(Referencias)

set(CMAKE_CXX_STANDARD 17)

add_executable( main.cpp Jugador.h Jugador.cpp Enemigo.h Enemigo.cpp Item.cpp Item.h main.cpp Entidad.h Habilidad.h Habilidad.cpp Personaje.h Personaje.cpp Entidad.cpp Inventario.cpp BolaDeFuego.cpp)
