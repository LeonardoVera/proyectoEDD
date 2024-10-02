#ifndef PROJECTEDD_INVENTARIO_H
#define PROJECTEDD_INVENTARIO_H

#include "../Estructuras/ListaEnlazada.h"
#include "MateriaPrima.h"
#include "Producto.h"

class Inventario {
private:
    ListaEnlazada<MateriaPrima> materias_primas;
    ListaEnlazada<Producto> productos;
public:
    void agregarMateriaPrima();
    void mostrarInventario();
    bool verificarExistenciaMateriaPrima(int id);
};

#endif //PROJECTEDD_INVENTARIO_H
