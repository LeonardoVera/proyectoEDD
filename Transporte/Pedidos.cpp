#include "Pedidos.h"

// Constructor por defecto
Pedidos::Pedidos() : idPedido(0), cliente(""), producto(""), cantidad(0),tipo_vino(" "), precioTotal(0.0), fecha(""), estado("pendiente"), precioUnitario(0.0) {}

// Getters
int Pedidos::getIdPedido() const {
    return idPedido;
}

string Pedidos::getCliente() const {
    return cliente;
}

string Pedidos::getProducto() const {
    return producto;
}

int Pedidos::getCantidad() const {
    return cantidad;
}

double Pedidos::getPrecioTotal() const {
    return precioTotal;
}

string Pedidos::getFecha() const {
    return fecha;
}

string Pedidos::getEstado() const {
    return estado;
}

// Setters
void Pedidos::setCliente(const string &cli) {
    cliente = cli;
}

void Pedidos::setProducto(const string &prod) {
    producto = prod;
}

void Pedidos::setCantidad(int cant) {
    cantidad = cant;
}

void Pedidos::setEstado(const string &est) {
    estado = est;
}

// Método para obtener la fecha del sistema
string Pedidos::obtenerFechaActual() {
    time_t t = time(nullptr);
    tm* now = localtime(&t);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%d/%m/%Y", now);
    return string(buffer);
}

// Método para realizar un pedido solicitando datos al usuario
void Pedidos::realizarPedido() {
    // Generar un ID aleatorio de 4 dígitos
    srand(time(0));
    idPedido = rand() % 9000 + 1000;

    // Ingresar los datos del cliente
    cout << "Ingrese el nombre del cliente: ";
    cin.ignore();  // Limpiar el buffer de entrada
    getline(cin, cliente);

    // Solicitar el tipo de vino y verificar abreviatura

    do
    {
        cout << "Ingrese el tipo de vino (s=seco, ss=semiseco, sd=semidulce, d=dulce, t=tinto, b=blanco): ";
        cin >> tipo_vino;
        if(tipo_vino != "ss" && tipo_vino!= "s" && tipo_vino!= "sd" && tipo_vino!= "d"&& tipo_vino!= "t"&& tipo_vino!= "b")
        {
            cout << "\nError, ingrese un tipo de vino correcto: "<<endl;
        }
    }while(tipo_vino != "ss" && tipo_vino!= "s" && tipo_vino!= "sd" && tipo_vino!= "d"&& tipo_vino!= "t"&& tipo_vino!= "b");

    switch(tipo_vino[0]) {
    case 's':
        if (tipo_vino == "s") {
            producto = "Vino seco";
            precioUnitario = 15.0;  // Seco
        }
        else if (tipo_vino == "ss") {
            producto = "Vino semiseco";
            precioUnitario = 18.0;  // Semiseco
        }
        else if (tipo_vino == "sd") {
            producto = "Vino semidulce";
            precioUnitario = 20.0;  // Semidulce
        }
        break;
    case 'd':
        producto = "Vino dulce";
        precioUnitario = 22.0;  // Dulce
        break;
    case 't':
        producto = "Vino tinto";
        precioUnitario = 25.0;  // Tinto
        break;
    case 'b':
        producto = "Vino blanco";
        precioUnitario = 17.0;  // Blanco
        break;
    default:
        cout << "Error inesperado." << endl;
        break;
    }


    // Ingresar la cantidad
    cout << "Ingrese la cantidad de botellas: ";
    cin >> cantidad;

    // Calcular el precio total
    precioTotal = cantidad * precioUnitario;

    // Obtener la fecha del sistema
    fecha = obtenerFechaActual();

    // Mostrar el precio total
    cout << "El precio total del pedido es: $" << precioTotal << endl;

    // Establecer el estado inicial del pedido
    estado = "pendiente";

    cout << "Pedido realizado exitosamente con ID: " << idPedido << endl;
}
