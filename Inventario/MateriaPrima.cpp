#include "MateriaPrima.h"
#include <iostream>
#include <string>
using namespace std;

MateriaPrima::MateriaPrima(double precio, int id,int cantidad, string nombre, string proveedor) {
    precio_unitario = precio;
    id_materia = id;
    this->cantidad = cantidad;
    this->nombre = nombre;
    this->proveedor = proveedor;
}

void MateriaPrima::mostrarInfo(short x, short y) {
    print(x, y, to_string(id_materia));
    print(x+20, y, nombre);
    print(x+40, y, to_string(cantidad));
    print(x+60, y, to_string(precio_unitario));
    print(x+80, y, proveedor);
}

double MateriaPrima::calcularCostoTotal() {
    return precio_unitario * cantidad;
}

void MateriaPrima::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

void MateriaPrima::setNombre(string nombre) {
    this->nombre = nombre;
}

void MateriaPrima::setId(int id) {
    id_materia = id;
}

void MateriaPrima::setPrecio(double precio) {
    precio_unitario = precio;
}

bool MateriaPrima::verificarDisponibilidad(int cantidadNecesaria) {
    return cantidad >= cantidadNecesaria;
}

MateriaPrima MateriaPrima::agregarMateriaPrima() {
    double precio;
    int id, cantidad;
    string nombre, proveedor;
    cout << "Ingrese el precio unitario de la materia prima: ";
    cin >> precio;
    cout << "Ingrese el id de la materia prima: ";
    cin >> id;
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;
    cin.ignore();
    cout << "Ingrese el nombre de la materia prima: ";
    getline(cin, nombre);
    cout << "Ingrese el proveedor: ";
    getline(cin, proveedor);
    MateriaPrima nuevaMateriaPrima(precio, id,cantidad, nombre, proveedor);
    return nuevaMateriaPrima;
}

MateriaPrima MateriaPrima::cambiarMateriaPrima(MateriaPrima materiaPrima) {
    double precio;
    int id, cantidad;
    string nombre;
    cout << "Ingrese el nuevo precio unitario de la materia prima: ";
    cin >> precio;
    cout << "Ingrese el nuevo id de la materia prima: ";
    cin >> id;
    cout << "Ingrese la nueva cantidad: ";
    cin >> cantidad;
    cout << "Ingrese el nuevo nombre de la materia prima: ";
    cin >> nombre;
    materiaPrima.setPrecio(precio);
    materiaPrima.setId(id);
    materiaPrima.setCantidad(cantidad);
    materiaPrima.setNombre(nombre);
    return materiaPrima;
}

MateriaPrima MateriaPrima::cambiarId(MateriaPrima materiaPrima) {
    int id;
    cout << "Ingrese el nuevo id de la materia prima: ";
    cin >> id;
    materiaPrima.setId(id);
    return materiaPrima;
}

MateriaPrima MateriaPrima::cambiarNombre(MateriaPrima materiaPrima) {
    string nombre;
    cout << "Ingrese el nuevo nombre de la materia prima: ";
    cin >> nombre;
    materiaPrima.setNombre(nombre);
    return materiaPrima;
}

MateriaPrima MateriaPrima::cambiarPrecio(MateriaPrima materiaPrima) {
    double precio;
    cout << "Ingrese el nuevo precio unitario de la materia prima: ";
    cin >> precio;
    materiaPrima.setPrecio(precio);
    return materiaPrima;
}

MateriaPrima MateriaPrima::cambiarCantidad(MateriaPrima materiaPrima) {
    int cantidad;
    cout << "Ingrese la nueva cantidad de la materia prima: ";
    cin >> cantidad;
    materiaPrima.setCantidad(cantidad);
    return materiaPrima;
}

int MateriaPrima::getCantidad() {
    return cantidad;
}

int MateriaPrima::getId() {
    return id_materia;
}
