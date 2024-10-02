#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include "../Utils/Gotoxy.h"

using namespace std;

class Usuario {
private:
    string nombre;
    string DNI;
    string email;
    string numero;
    string contrasena;

public:
    // Constructor
    Usuario(string nombre, string DNI, string email, string numero, string contrasena);

    // Getters
    string getNombre();
    string getDNI();
    string getEmail();
    string getNumero();
    string getContrasena();

    // Setters
    void setNombre(string nombre);
    void setDNI(string DNI);
    void setEmail(string email);
    void setNumero(string numero);
    void setContrasena(string contrasena);

    // Validar contraseña
    bool validarContrasena();

    // Método para comparar la contraseña ingresada
    bool compararContrasena(string contrasenaIngresada);
};

#endif // USUARIO_H
