//
// Created by leona on 28/09/2024.
//

#include "Producto.h"
using namespace std;

Producto::Producto(double precio, int id, int cantidad) {
	precio_aproximado = precio;
	id_producto = id;
	cantidad_producto = cantidad;
}

void Producto::mostrarInfo() {
	cout << "ID: " << id_producto << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Precio: " << precio_aproximado << endl;
	cout << "Cantidad: " << cantidad_producto << endl;
}

void Producto::calcularPrecioFinal() {
	double precio_final = precio_aproximado * cantidad_producto;
	cout << "El precio final es: " << precio_final << endl;
}

void Producto::setCantidad(int cantidad) {
	cantidad_producto = cantidad;
}

void Producto::setNombre(string nombre) {
	this->nombre = nombre;
}

void Producto::setId(int id) {
	id_producto = id;
}

void Producto::setPrecio(double precio) {
	precio_aproximado = precio;
}


Producto Producto::agregarProducto() {
	double precio;
	int id, cantidad;
	cout << "Ingrese el precio del producto: ";
	cin >> precio;
	cout << "Ingrese el id del producto: ";
	cin >> id;
	cout << "Ingrese la cantidad: ";
	cin >> cantidad;
	Producto nuevoProducto(precio, id, cantidad);
	return nuevoProducto;
}

Producto Producto::cambiarProducto(Producto producto) {
	double precio;
	int id, cantidad;
	cout << "Ingrese el nuevo precio del producto: ";
	cin >> precio;
	cout << "Ingrese el nuevo id del producto: ";
	cin >> id;
	cout << "Ingrese el nuevo total de items: ";
	cin >> cantidad;
	producto.setPrecio(precio);
	producto.setId(id);
	producto.setCantidad(cantidad);
	return producto;
}

Producto Producto::cambiarId(Producto producto) {
	int id;
	cout << "Ingrese el nuevo id del producto: ";
	cin >> id;
	producto.setId(id);
	return producto;
}

Producto Producto::cambiarNombre(Producto producto) {
	string nombre;
	cout << "Ingrese el nuevo nombre del producto: ";
	cin >> nombre;
	producto.setNombre(nombre);
	return producto;
}

Producto Producto::cambiarPrecio(Producto producto) {
	double precio;
	cout << "Ingrese el nuevo precio del producto: ";
	cin >> precio;
	producto.setPrecio(precio);
	return producto;
}

Producto Producto::cambiarCantidad(Producto producto) {
	int cantidad;
	cout << "Ingrese la nueva cantidad del producto: ";
	cin >> cantidad;
	producto.setCantidad(cantidad);
	return producto;
}
