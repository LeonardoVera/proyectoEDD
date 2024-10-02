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

void Inventario::mostrarInventarioMateriaPrima() {
    system("cls");
    // Recorremos la lista de materias primas
    Nodo<MateriaPrima> *aux;
    aux = materias_primas.getFirstNode();
    for (int i = 0; i < materias_primas.getLength(); i++) {
        // Mostramos la informacion de cada materia prima
        print(15, 1, "ID");
        print(35, 1, "Nombre");
        print(55, 1, "Cantidad");
        print(75, 1, "Precio Unitario");
        print(95, 1, "Proveedor");
        aux->dato.mostrarInfo(15,2+i);
        aux = aux->siguiente;
    }
    cout << endl << endl;
    // Recorremos la lista de productos
    //for (int i = 0; i < productos.getLength(); i++) {
    //    // Mostramos la informacion de cada producto
    //    Nodo<Producto> *aux = productos.getFirstNode();
    //    aux->dato.mostrarInfo();
    //    aux = aux->siguiente;
    //}
}
