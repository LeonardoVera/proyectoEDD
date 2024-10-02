#ifndef PROJECTEDD_LISTAENLAZADA_H
#define PROJECTEDD_LISTAENLAZADA_H

#include "Nodo.h"

using namespace std;

template <typename T>
class ListaEnlazada {
private:
    Nodo<T> *first;
    Nodo<T> *last;
    int length;
public:
    ListaEnlazada() {
        this->first = nullptr;
        this->last = nullptr;
        this->length = 0;
    }

    void add(T dato) {
        Nodo<T> *nuevo = new Nodo<T>(dato);
        if (this->length == 0) {
            this->first = nuevo;
            this->last = nuevo;
        } else {
            this->last->siguiente = nuevo;
            nuevo->anterior = this->last;
            this->last = nuevo;
        }
        this->length++;
    }

    T remove() {
        if (this->length == 0) {
            throw std::out_of_range("La lista ya se encuentra vacia, imposible remover");
        }
        Nodo<T> *aBorrar = this->first;
        T dato = aBorrar->dato;
        this->first = this->first->siguiente;
        if (this->first != nullptr) {
            this->first->anterior = nullptr;
        }
        delete aBorrar;
        this->length--;
        return dato;
    }

    T getFirst() {
        if (this->length == 0) {
            throw std::out_of_range("La lista se encuentra vacia");
        }
        return this->first->dato;
    }

    T getLast() {
        if (this->length == 0) {
            throw std::out_of_range("La lista se encuentra vacia");
        }
        return this->last->dato;
    }

    int getLength() {
        return this->length;
    }

    void print() {
        Nodo<T> *actual = this->first;
        while (actual != nullptr) {
            std::cout << actual->dato << " ";
            actual = actual->siguiente;
        }
        std::cout << std::endl;
    }
};


#endif //PROJECTEDD_LISTAENLAZADA_H
