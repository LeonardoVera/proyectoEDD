#undef byte

#include "Menus/MainMenu.h"
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    MainMenu menu;

    menu.mostrarMenu();
    return 0;
}