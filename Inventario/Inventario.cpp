#include "Inventario.h"

void Inventario::agregarMateriaPrima() {
    MateriaPrima nueva_materia = MateriaPrima::agregarMateriaPrima();
    materias_primas.add(nueva_materia);
}

bool Inventario::verificarExistenciaMateriaPrima(int id) {
    // Recorremos la lista de materias primas
    for (int i = 0; i < materias_primas.getLength(); i++) {
        // Si encontramos una materia prima con el id dado, retornamos verdadero
        Nodo<MateriaPrima> *aux = materias_primas.getFirstNode();
        if (aux->dato.getId() == id) {
            return true;
        }
        aux = aux->siguiente;
    }
    return false;
}

void Inventario::mostrarInventario() {
    // Recorremos la lista de materias primas
    for (int i = 0; i < materias_primas.getLength(); i++) {
        // Mostramos la informacion de cada materia prima
        Nodo<MateriaPrima> *aux = materias_primas.getFirstNode();
        aux->dato.mostrarInfo();
        aux = aux->siguiente;
    }
    // Recorremos la lista de productos
    //for (int i = 0; i < productos.getLength(); i++) {
    //    // Mostramos la informacion de cada producto
    //    Nodo<Producto> *aux = productos.getFirstNode();
    //    aux->dato.mostrarInfo();
    //    aux = aux->siguiente;
    //}
}
