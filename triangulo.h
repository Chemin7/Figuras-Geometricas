#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include "figura.h"
class Triangulo:public Figura{

public:
    Triangulo();

    void calcularArea();
};

Triangulo::Triangulo()
{

}


void Triangulo::calcularArea()
{
    this->area= (base*altura)/2;
}

#endif // TRIANGULO_H_INCLUDED
