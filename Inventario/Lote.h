#ifndef PROJECTEDD_LOTE_H
#define PROJECTEDD_LOTE_H

#include <string>
#include <iostream>

using namespace std;

// Estados posibles de un lote
const string ESTADOS[] = {"Sin clasificar", "Recepcionado", "Maceracion", "Fermentacion",
                          "Clarificacion", "Crianza", "Embotellado", "Transporte", "Descartado"};

class Lote {
private:
    string id_;
    string fechaProduccion_;
    string fechaVencimiento_;
    string estado_;
public:
    Lote();
    string comprobarEstado();
    void setId();
};


#endif //PROJECTEDD_LOTE_H