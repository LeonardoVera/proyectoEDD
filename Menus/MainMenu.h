#ifndef MAINMENU_H
#define MAINMENU_H
#undef byte
#include <windows.h>
#include <string>
using namespace std;

class MainMenu {
public:
    // Destructor
    ~MainMenu();

    // Función para mostrar el menú principal
    void mostrarMenu();

private:
    // Función para mover el cursor a una posición específica
    void gotoxy(int x, int y);

    // Función para dibujar los bordes decorativos del menú
    void dibujarBordes();

    // Función para mostrar mensajes temporales
    void mostrarMensaje(const string &mensaje);

    void limpiarPantalla();
};

#endif // MAINMENU_H
