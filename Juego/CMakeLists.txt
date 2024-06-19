cmake_minimum_required(VERSION 3.27)
project(Juego)

set(CMAKE_CXX_STANDARD 17)

add_executable(Juego main.cpp
        Configuracion.h
        Enemigo.cpp
        PersonajeVideojuego.h
        Inventario.h
        Entidad.h
        Configuracion.cpp
        Duende.h
        Duende.cpp
        Guerrero.cpp
        Inventario.cpp
        Item.cpp
        Mago.cpp
        Orco.cpp
        PersonajeVideojuego.cpp)
