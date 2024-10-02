//
// Created by leona on 01/10/2024.
//

#include "MainMenu.h"

using namespace std;

MainMenu::~MainMenu() {
    cout << "Programa finalizado" << endl;
    system("pause");
}

void MainMenu::mostrarMenu() {
    int opt;
    do {
        system("cls");
        print(10, 5, "1. Opcion");
        print(10, 6, "2. Opcion");
        print(10, 7, "3. Opcion");
        print(10, 8, "4. Opcion");
        cout << endl;
        color(9);
        print(10, 9, "->");
        cin >> opt;
        color(7);
    }while(opt!=5);
}

