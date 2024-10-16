#include "Lote.h"

Lote::Lote() {
    this->id_ = "Sin clasificar";
    this->tipo_ = "Sin clasificar";
    // this->estados_.push(ESTADOS[0]);
    this->estadoActual_ = 0;
    this->fechaProduccion_ = "Sin clasificar";
    this->fechaVencimiento_ = "Sin clasificar";
}

// Acciones de la pila
void Lote::siguienteEstado() {
    if(this->estadoActual_ == 8) {
        cout << "El lote ya se encuentra en el estado final" << endl;
    }else {
        this->estadoActual_++;
        // Convertimos string a const char * para poder agregarlo a la pila
        this->estados_.push(ESTADOS[this->estadoActual_].c_str());
    }
}
void Lote::retrocederEstado() {
    if(this->estadoActual_ == 0) {
        cout << "El lote ya se encuentra en el estado inicial" << endl;
    }else {
        this->estadoActual_--;
        this->estados_.pop();
    }
}

// Setters & Getters
void Lote::setTipo(string tipo) {
    this->tipo_ = tipo;
}
string Lote::getTipo() {
    return this->tipo_;
}
string Lote::getEstado() {
    return ESTADOS[this->estadoActual_];
}
string Lote::getId() {
    return this->id_;
}

void Lote::setFechaProduccion(string fecha) {
    this->fechaProduccion_ = fecha;
}
void Lote::setId(string id) {
    this->id_ = this->tipo_ + "-" + this->fechaProduccion_ + "-" + id;
    cout << "Lote creado exitosamente" << endl;
}
