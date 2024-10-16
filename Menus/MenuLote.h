#ifndef PROJECTEDD_MENULOTE_H
#define PROJECTEDD_MENULOTE_H

#include "../Estructuras/ListaEnlazada.h"
#include "../Inventario/Lote.h"
#include "../Utils/Gotoxy.h"
#include <iostream>

class MenuLote {
private:
    ListaEnlazada<Lote> lotes;
public:
    MenuLote();
    // Funciones
    void mostrarMenu();
    void iniciarMenu();

    void nuevoLote();
    void consultarEstadoLotes();
    void gestionarLotes();
};


#endif //PROJECTEDD_MENULOTE_H
