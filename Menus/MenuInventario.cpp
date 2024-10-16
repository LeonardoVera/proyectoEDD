#include "MenuInventario.h"

MenuInventario::~MenuInventario() {
    cout << "Saliendo del menú de inventario" << endl;
    system("pause");
}
void MenuInventario::mostrarMenu() {
    gotoxy(32, 5);
    cout << "1. Agregar materia prima";
    gotoxy(32, 7);
    cout << "2. Mostrar inventario de materia prima";
    gotoxy(32, 9);
    cout << "3. Eliminar materia prima";
    gotoxy(32, 11);
    cout << "4. Regresar al menú principal";
    gotoxy(32, 13);
    cout << "Seleccione una opción (1-4): ";
}

void MenuInventario::iniciarMenu() {
    int opcion;
    do {
        system("cls");
        gotoxy(28, 2);
        cout << "=============================";
        gotoxy(30, 3);
        cout << "MENÚ DE INVENTARIO";
        gotoxy(28, 4);
        cout << "=============================";
        mostrarMenu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                inventario.agregarMateriaPrima();
            break;
            case 2:
                inventario.mostrarInventarioMateriaPrima();
            break;
            case 3:

                int idEliminar;
            cout << "Ingrese el ID de la materia prima a eliminar: ";
            cin >> idEliminar;
            inventario.eliminarMateriaPrima(idEliminar);
            break;
            case 4:
                break;
            default:
                cout << "Opcion invalida" << endl;
            system("pause");
            break;
        }
    } while (opcion != 4);
}
