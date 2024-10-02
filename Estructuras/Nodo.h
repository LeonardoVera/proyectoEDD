#ifndef PROJECTEDD_NODO_H
#define PROJECTEDD_NODO_H

#include <stdexcept>
#include <iostream>

template <typename T>
struct Nodo {
    T dato;
    Nodo<T> *siguiente;
    Nodo<T> *anterior;

    Nodo(const T &dato) : dato(dato), siguiente(nullptr), anterior(nullptr) {}
};

#endif //PROJECTEDD_NODO_H
