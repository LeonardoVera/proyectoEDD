#include "Usuario.h"
#include <cctype>  // Para funciones como isdigit, isupper, islower
#include <algorithm>  // Para std::any_of

// Constructor de la clase Usuario
Usuario::Usuario(string nombre, string DNI, string email, string numero, string contrasena) {
    this->nombre = nombre;
    this->DNI = DNI;
    this->email = email;
    this->numero = numero;
    this->contrasena = contrasena;
}

// Getters
string Usuario::getNombre() {
    return nombre;
}

string Usuario::getDNI() {
    return DNI;
}

string Usuario::getEmail() {
    return email;
}

string Usuario::getNumero() {
    return numero;
}

string Usuario::getContrasena() {
    return contrasena;
}

// Setters
void Usuario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Usuario::setDNI(string DNI) {
    this->DNI = DNI;
}

void Usuario::setEmail(string email) {
    this->email = email;
}

void Usuario::setNumero(string numero) {
    this->numero = numero;
}

void Usuario::setContrasena(string contrasena) {
    this->contrasena = contrasena;
}

// Método para validar la contraseña almacenada
bool Usuario::validarContrasena() {
    if (this->contrasena.length() < 8) {
        return false; // La longitud debe ser al menos de 8 caracteres
    }

    bool tieneMayuscula = false, tieneMinuscula = false, tieneDigito = false, tieneEspecial = false;

    for (char c : this->contrasena) {
        if (isupper(c)) tieneMayuscula = true;
        else if (islower(c)) tieneMinuscula = true;
        else if (isdigit(c)) tieneDigito = true;
        else if (ispunct(c)) tieneEspecial = true;  // Detecta caracteres especiales
    }

    // La contraseña debe cumplir con todos los criterios
    return tieneMayuscula && tieneMinuscula && tieneDigito && tieneEspecial;
}

// Método para comparar la contraseña ingresada con la almacenada
bool Usuario::compararContrasena(string contrasenaIngresada) {
    return this->contrasena == contrasenaIngresada;
}
