#include "MenuLote.h"

void MenuLote::mostrarMenu() {
    gotoxy(32, 5);
    cout << "1. Nuevo lote" << endl;
    gotoxy(32, 7);
    cout << "2. Consultar estado de lotes" << endl;

    // TODO: Implementar historial de cambios de lote dentro de clase lote
    // cout << "3. Consultar historial de lote" << endl;

    gotoxy(32, 9);
    cout << "4. Gestionar estado de lote" << endl;
    gotoxy(32, 11);
    cout << "5. Regresar al menu inicial" << endl;
    gotoxy(32, 13);
    cout << "Seleccione una opcion (1-5): ";
}

// CASE 1
void MenuLote::nuevoLote() {
    // Creamos un nuevo lote
    system("cls");
    Lote lote = Lote();
    string fecha;
    string tipo;
    string id;

    cin.ignore();
    cout << "Ingrese el tipo de lote: ";
    getline(cin, tipo);
    lote.setTipo(tipo);

    cout << "Ingrese fecha de produccion: ";
    getline(cin, fecha);
    lote.setFechaProduccion(fecha);

    cout << "Ingrese un ID para el lote: ";
    getline(cin, id);
    lote.setId(id);

    // Agregamos el nuevo lote a la lista enlazada
    lotes.add(lote);
}

// CASE 2: Mostrar IDLote - Tipo - Estado
void MenuLote::consultarEstadoLotes() {
    system("cls");
    cout << "ID Lote\t\t\tTipo\t\tEstado" << endl;
    for(int i = 0; i < lotes.getLength(); i++) {
        Lote lote = lotes.get(i);
        cout << lote.getId() << "\t\t" << lote.getTipo() << "\t\t" << lote.getEstado() << endl;
    }
    system("pause");
}

// CASE 4: Gestionar estados de lotes
void MenuLote::gestionarLotes() {
    // Pedirle al usuario un ID de lote a modificar
    // Menu:
    // 1. Cambiar estado de lote / avanzar o retroceder estado
    // 2. Cambiar estado de lote / avanzar o retroceder estado
    // 3. Comprobar estado actual
    // 4. Regresar
    system("cls");
    string idBuscar;
    cout << "Ingrese el ID del lote a modificar: ";
    cin.ignore();
    getline(cin, idBuscar);

    // Buscar el lote en la lista enlazada
    Lote lote;
    for(int i = 0; i < lotes.getLength(); i++) {
        Lote loteActual = lotes.get(i);
        if(loteActual.getId() == idBuscar) {
            lote = loteActual;
            break;
        }
    }

    // Si no se encuentra el lote, mostrar mensaje y salir
    if(lote.getId() == "Sin clasificar") {
        cout << "No se encontro el lote con el ID ingresado" << endl;
        system("pause");
        return;
    }

    // Menu de gestion de lote
    int opcion;
    do {
        system("cls");
        cout << "ID Lote\t\tTipo\t\tEstado" << endl;
        cout << lote.getId() << "\t\t" << lote.getTipo() << "\t\t" << lote.getEstado() << endl;
        cout << "1. Cambiar estado de lote" << endl;
        cout << "2. Comprobar estado actual" << endl;
        cout << "3. Regresar" << endl;
        cout << "Seleccione una opcion (1-3): ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                // Cambiar estado de lote
                int opcionEstado;
                cout << "1. Avanzar estado" << endl;
                cout << "2. Retroceder estado" << endl;
                cout << "Seleccione una opcion (1-2): ";
                cin >> opcionEstado;

                if(opcionEstado == 1) {
                    lote.siguienteEstado();
                } else if(opcionEstado == 2) {
                    lote.retrocederEstado();
                } else {
                    cout << "Opcion invalida" << endl;
                }
                break;
            case 2:
                // Comprobar estado actual
                cout << "Estado actual: " << lote.getEstado() << endl;
                break;
            case 3:
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
        system("pause");
    } while(opcion != 3);
}

void MenuLote::iniciarMenu() {
    int opcion;

    do {
        system("cls");
        mostrarMenu();
        gotoxy(32, 15);
        cout << "-> ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                nuevoLote();
                system("pause");
                break;
            case 2:
                consultarEstadoLotes();
                system("pause");
                break;
            case 4:
                gestionarLotes();
                system("pause");
                break;
            case 5:
                break;
            default:
                break;
        }
    } while(opcion != 5);
    system("pause");
}

MenuLote::MenuLote() {
    // Agregamos algunos elementos de prueba a la lista enlazada
    Lote lote1 = Lote();
    lote1.setTipo("Vino");
    lote1.setFechaProduccion("2021");
    lote1.setId("123");
    lotes.add(lote1);

    Lote lote2 = Lote();
    lote2.setTipo("Cerveza");
    lote2.setFechaProduccion("2021");
    lote2.setId("234");
    lotes.add(lote2);

    Lote lote3 = Lote();
    lote3.setTipo("Vino");
    lote3.setFechaProduccion("2021");
    lote3.setId("345");
    lotes.add(lote3);
}