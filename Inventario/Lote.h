#ifndef PROJECTEDD_LOTE_H
#define PROJECTEDD_LOTE_H

#include <string>
#include <iostream>
#include "../Estructuras/Pila.h"

using namespace std;

// Estados posibles de un lote
const string ESTADOS[] = {"Sin clasificar", "Recepcionado", "Maceracion", "Fermentacion",
                          "Clarificacion", "Crianza", "Embotellado", "Transporte", "Descartado"};

class Lote {
private:
    string id_;
    string tipo_;
    Pila<const char *> estados_; // FIXME: bad_alloc
    int estadoActual_;
    string fechaProduccion_;
    string fechaVencimiento_;
public:
    Lote();
    void setTipo(string tipo);
    void setFechaProduccion(string fecha);
    void setId(string id);
    void siguienteEstado();
    void retrocederEstado();
    string getId();
    string getTipo();
    string getEstado();
};


#endif //PROJECTEDD_LOTE_H