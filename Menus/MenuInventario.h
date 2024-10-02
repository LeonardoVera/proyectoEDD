#ifndef PROJECTEDD_MENUINVENTARIO_H
#define PROJECTEDD_MENUINVENTARIO_H


#include <iostream>
#include "../Inventario/Inventario.h"

using namespace std;

class MenuInventario {
public:
    // Destructor
    ~MenuInventario();
    Inventario inventario;

    // Función para mostrar el menú de inventario
    void mostrarMenu();
    void iniciarMenu();

};

#endif //PROJECTEDD_MENUINVENTARIO_H
