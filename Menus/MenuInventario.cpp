#include "MenuInventario.h"

MenuInventario::~MenuInventario() {
    cout << "Saliendo del menu de inventario" << endl;
    system("pause");
}
void MenuInventario::mostrarMenu() {
    gotoxy(32, 6);
    cout << "1. Agregar materia prima";
    gotoxy(32, 8);
    cout << "2. Mostrar inventario de materia prima";
    gotoxy(32, 10);
    cout << "3. Eliminar materia prima";
    gotoxy(32, 12);
    cout << "4. Regresar al menu principal";
    gotoxy(32, 14);
    cout << "Seleccione una opcion (1-4): ";
}

void MenuInventario::iniciarMenu() {
    int opcion;
    do {
        system("cls");
        gotoxy(43, 2);
        cout << "=============================";
        gotoxy(50, 3);
        cout << "MENU DE INVENTARIO";
        gotoxy(43, 4);
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
