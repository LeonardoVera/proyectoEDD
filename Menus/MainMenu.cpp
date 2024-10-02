  // Para la función gotoxy
#include "MainMenu.h"
#include <iostream>

using namespace std;

// Implementación de gotoxy para mover el cursor
void MainMenu::gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Implementación del destructor
MainMenu::~MainMenu() {
    cout << "Programa finalizado" << endl;
    system("pause");
}

// Función para dibujar bordes decorativos
void MainMenu::dibujarBordes() {
    // Líneas superiores e inferiores
    for (int i = 0; i < 80; i++) {
        gotoxy(i, 0);
        cout << "*";
        gotoxy(i, 24);
        cout << "*";
    }

    // Líneas laterales
    for (int i = 1; i < 24; i++) {
        gotoxy(0, i);
        cout << "*";
        gotoxy(79, i);
        cout << "*";
    }
}

// Función para mostrar el menú
void MainMenu::mostrarMenu() {
    int opcion;

    do {
        system("cls");  // Limpiar pantalla
        dibujarBordes();

        // Título del menú
        gotoxy(28, 2);
        cout << "=============================";
        gotoxy(30, 3);
        cout << "SISTEMA DE GESTIÓN DE VINOS";
        gotoxy(28, 4);
        cout << "=============================";

        // Opciones del menú
        gotoxy(32, 7);
        cout << "1. Gestionar Inventario";
        gotoxy(32, 9);
        cout << "2. Gestionar Recursos Humanos";
        gotoxy(32, 11);
        cout << "3. Planificación de Producción";
        gotoxy(32, 13);
        cout << "4. Autenticación de Usuarios";
        gotoxy(32, 15);
        cout << "5. Seguimiento de Procesos";
        gotoxy(32, 17);
        cout << "6. Salir";

        // Instrucciones
        gotoxy(26, 20);
        cout << "Seleccione una opción (1-6): ";
        gotoxy(28, 20);
        cin >> opcion;

        switch (opcion) {
            case 1:
                menuInventario.iniciarMenu();
                break;
            case 2:
                mostrarMensaje("Gestionar Recursos Humanos - Función en desarrollo");
                break;
            case 3:
                mostrarMensaje("Planificación de Producción - Función en desarrollo");
                break;
            case 4:
                mostrarMensaje("Autenticación de Usuarios - Función en desarrollo");
                break;
            case 5:
                mostrarMensaje("Seguimiento de Procesos - Función en desarrollo");
                break;
            case 6:
                mostrarMensaje("Saliendo del sistema...");
                break;
            default:
                mostrarMensaje("Opción inválida. Intente de nuevo.");
                break;
        }
        cout << "\n\n";
    } while (opcion != 6);
}

// Función para mostrar un mensaje temporal después de seleccionar una opción
void MainMenu::mostrarMensaje(const string &mensaje) {
    system("cls");  // Limpiar pantalla
    gotoxy(30, 10);
    cout << mensaje;
    Sleep(2000);  // Pausa para que el usuario vea el mensaje
}
