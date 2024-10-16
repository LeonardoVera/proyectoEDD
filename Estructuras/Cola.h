#ifndef PROJECTEDD_COLA_H
#define PROJECTEDD_COLA_H


#include "Nodo.h"

template <typename T>
class Cola {
private:
    Nodo<T> *first;
    Nodo<T> *last;
    int length;
public:
    Cola() {
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
            this->last = nuevo;
        }
        this->length++;
    }

    void remove() {
        if (this->length == 0) {
            throw std::out_of_range("La cola ya se encuentra vacia, imposible remover");
        }
        Nodo<T> *aBorrar = this->first;
        T dato = aBorrar->dato;
        this->first = this->first->siguiente;
        delete aBorrar;
        this->length--;
    }

    T getFirst() {
        if (this->length == 0) {
            throw std::out_of_range("");
        }

        return this->first->dato;
    }

    T getLast() {
        if (this->length == 0) {
            throw std::out_of_range("");
        }

        return this->last->dato;
    }

    int getLength() {
        return this->length;
    }

    bool isEmpty() {
        return this->length == 0;
    }
};


#endif //PROJECTEDD_COLA_H