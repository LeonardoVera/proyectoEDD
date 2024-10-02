//
// Created by leona on 28/09/2024.
//

#ifndef PROJECTEDD_MATERIAPRIMA_H
#define PROJECTEDD_MATERIAPRIMA_H

#include <iostream>
#include <string>
#include "../Utils/Gotoxy.h"
using namespace std;

class MateriaPrima {

private:
    int id_materia;
    string nombre;
    int cantidad;
    double precio_unitario;
    string proveedor;
    string fecha_ingreso;
    string fecha_vencimiento;

public:
    MateriaPrima(double precio, int id, string nombre, string proveedor);

    void mostrarInfo(short, short);
    double calcularCostoTotal();
    void setCantidad(int cantidad);
    void setNombre(string nombre);
    void setId(int id);
    void setPrecio(double precio);
    int getCantidad();
    int getId();
    bool verificarDisponibilidad(int cantidadNecesaria);

    static MateriaPrima agregarMateriaPrima();
    static MateriaPrima cambiarId(MateriaPrima materiaPrima);
    static MateriaPrima cambiarNombre(MateriaPrima materiaPrima);
    static MateriaPrima cambiarPrecio(MateriaPrima materiaPrima);
    static MateriaPrima cambiarCantidad(MateriaPrima materiaPrima);
    static MateriaPrima cambiarMateriaPrima(MateriaPrima materiaPrima);
};

#endif //PROJECTEDD_MATERIAPRIMA_H
