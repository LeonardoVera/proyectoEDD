cmake_minimum_required(VERSION 3.26)
project(projectEDD)

set(CMAKE_CXX_STANDARD 23)

add_executable(projectEDD main.cpp
        Inventario/Lote.cpp
        Inventario/Lote.h
        Inventario/Producto.cpp
        Inventario/Producto.h
        Inventario/MateriaPrima.cpp
        Inventario/MateriaPrima.h
        Usuario.cpp
        Usuario.h
        Estructuras/ListaEnlazada.h
        Estructuras/Cola.h
        Transporte/Pedidos.cpp
        Transporte/Pedidos.h
        Estructuras/Nodo.h
        Utils/Gotoxy.h
        Menus/MainMenu.cpp
        Menus/MainMenu.h
        Inventario/Inventario.cpp
        Inventario/Inventario.h)
