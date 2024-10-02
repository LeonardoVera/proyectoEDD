#ifndef PROJECTEDD_NODO_H
#define PROJECTEDD_NODO_H

#include <stdexcept>
#include <iostream>

template <typename T>
struct Nodo {
    T dato;
    Nodo<T> *siguiente;
    Nodo<T> *anterior;

    Nodo(T dato) {
        this->dato = dato;
        this->siguiente = nullptr;
        this->anterior = nullptr;
    }
};

template <typename T>
using pNodo = Nodo<T> *;

#endif //PROJECTEDD_NODO_H
