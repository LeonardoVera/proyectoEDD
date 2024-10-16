#include "Inventario.h"

// Función para mostrar un mensaje temporal después de seleccionar una opción
void mostrarMensaje(const string &mensaje) {
    system("cls");  // Limpiar pantalla
    gotoxy(30, 10);
    cout << mensaje;
    Sleep(2000);  // Pausa para que el usuario vea el mensaje
}

void Inventario::agregarMateriaPrima() {
    system("cls");
    MateriaPrima nueva_materia = MateriaPrima::agregarMateriaPrima();
    materias_primas.add(nueva_materia);
    color(2);
    mostrarMensaje("Materia prima agregada exitosamente");
    color(7);
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
    int counter = 0;
    for (int i = 0; i < materias_primas.getLength(); i++) {
        // Mostramos la informacion de cada materia prima
        print(15, 1, "ID");
        print(26,1,"|");
        print(35, 1, "Nombre");
        print(48,1,"|");
        print(55, 1, "Cantidad");
        print(69,1,"|");
        print(75, 1, "Precio Unitario");
        print(92,1,"|");
        print(95, 1, "Proveedor");
        print(15,2,"-----------------------------------------------------------------------------------------");
        if (counter%2 == 0) {
            color(1);
        }
        aux->dato.mostrarInfo(15,3+i);
        aux = aux->siguiente;
        color(7);
        counter++;
    }
    cout << endl << endl;
    system("pause");
    // Recorremos la lista de productos
    //for (int i = 0; i < productos.getLength(); i++) {
    //    // Mostramos la informacion de cada producto
    //    Nodo<Producto> *aux = productos.getFirstNode();
    //    aux->dato.mostrarInfo();
    //    aux = aux->siguiente;
    //}
}
void Inventario::eliminarMateriaPrima(int id) {
    system("cls");
    Nodo<MateriaPrima>* anterior = nullptr;
    Nodo<MateriaPrima>* actual = materias_primas.getFirstNode();

    // Recorremos la lista para encontrar el producto con el ID
    while (actual != nullptr) {
        if (actual->dato.getId() == id) {
            if (anterior == nullptr) {
                // Si el elemento a eliminar es el primero
                materias_primas.removeFirst();
            } else {
                // Si el elemento está en medio o al final
                anterior->siguiente = actual->siguiente;
                delete actual;
            }
            color(2); // Mostrar mensaje de éxito
            mostrarMensaje("Materia prima eliminada exitosamente");
            color(7);
            return;
        }
        anterior = actual;
        actual = actual->siguiente;
    }
    // Si no se encuentra la materia prima con ese ID
    color(4); // Mostrar mensaje de error
    mostrarMensaje("Materia prima no encontrada");
    color(7);
}