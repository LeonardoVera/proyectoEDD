#include "Nodo.h"

template<class T>
class Pila {
private:
    Nodo<T> *top_;
    int size_;
public:
    Pila() {
        top_ = nullptr;
        size_ = 0;
    }

    ~Pila() {
        while (size_ > 0) {
            pop();
        }
    }

    // Agrega un elemento a la pila
    void push(T data) {
        Nodo<T> *nuevo = new Nodo<T>(data);
        nuevo->siguiente = top_;
        top_ = nuevo;
        size_++;
    }

    // Elimina el elemento del tope de la pila
    void pop() {
        if (size_ == 0) {
            throw std::out_of_range("La pila ya se encuentra vacia, imposible remover");
        }
        Nodo<T> *aux = top_;
        T data = aux->dato;
        top_ = top_->siguiente;
        delete aux;
        size_--;
    }

    int getSize() {
        return size_;
    }

    T getTop() {
        if (size_ == 0) {
            throw std::out_of_range("La pila se encuentra vacia");
        }
        return top_->dato;
    }

    bool empty() {
        return size_ == 0;
    }
};
