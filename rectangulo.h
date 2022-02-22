#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED
#include "figura.h"
class Rectangulo : public Figura {

public:
    Rectangulo();

    void calcularArea();

};
Rectangulo::Rectangulo()
{

}


void Rectangulo::calcularArea()
{
    this->area = (base * altura);
}

#endif // RECTANGULO_H_INCLUDED
