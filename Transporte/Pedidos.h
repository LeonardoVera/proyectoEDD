#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <iostream>
#include <string>
#include <ctime>   // Para obtener la fecha del sistema
#include <cstdlib> // Para generar números aleatorios

using namespace std;

class Pedidos {
private:
    int idPedido;              // Identificador único del pedido
    string tipo_vino;
    string cliente;            // Nombre del cliente
    string producto;           // Tipo de vino solicitado
    int cantidad;              // Cantidad de botellas pedidas
    double precioTotal;        // Precio total del pedido
    string fecha;              // Fecha en la que se realizó el pedido
    string estado;             // Estado del pedido (pendiente, procesado, completado)
    double precioUnitario;     // Precio unitario dependiendo del tipo de vino

public:
    // Constructor por defecto
    Pedidos();

    // Getters
    int getIdPedido() const;
    string getCliente() const;
    string getProducto() const;
    int getCantidad() const;
    double getPrecioTotal() const;
    string getFecha() const;
    string getEstado() const;

    // Setters
    void setCliente(const string &cli);
    void setProducto(const string &prod);
    void setCantidad(int cant);
    void setEstado(const string &est);

    // Método para realizar un pedido solicitando datos al usuario
    void realizarPedido();

    // Método para obtener la fecha del sistema
    string obtenerFechaActual();
};

#endif // PEDIDOS_H
