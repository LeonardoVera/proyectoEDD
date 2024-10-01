#include "Lote.h"

Lote::Lote() {
    this->id_ = "Sin clasificar";
    this->fechaProduccion_ = "Sin clasificar";
    this->fechaVencimiento_ = "Sin clasificar";
    this->estado_ = ESTADOS[0];
}

string Lote::comprobarEstado() {
    return std::string();
}

void Lote::setId() {
    if(estado_ == ESTADOS[0] || fechaProduccion_ == ESTADOS[0]) {
        cout << "Datos insuficientes para asignar un ID" << endl;
    }else {
       //TODO: Implementar la asignacion de un ID formato: "TIPO(TIN-BLN-ROS)-AÑO-DIGITO(4dig)"
    }
}