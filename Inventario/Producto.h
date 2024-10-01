//
// Created by leona on 28/09/2024.
//

#ifndef PROJECTEDD_PRODUCTO_H
#define PROJECTEDD_PRODUCTO_H
#include <iostream>
#include <string.h>
using namespace std;

class Producto {

private:
	int id_producto;
	string nombre;
	double precio_aproximado;
	int cantidad_producto;
public:
	Producto(double precio, int id, int total);

	void mostrarInfo();
	void calcularPrecioFinal();
	void setCantidad(int cantidad_producto);
	void setNombre(string nombre);
	void setId(int id);
	void setPrecio(double precio);

	static Producto agregarProducto();

	static Producto cambiarId(Producto producto);
	static Producto cambiarNombre(Producto producto);
	static Producto cambiarPrecio(Producto producto);
	static Producto cambiarCantidad(Producto producto);
	static Producto cambiarProducto(Producto producto);


};


#endif //PROJECTEDD_PRODUCTO_H
