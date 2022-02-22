#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#define _USE_MATH_DEFINES
#include <cmath>
#include "figura.h"

using namespace std;

class Poligono:public Figura{
private:

    double longLado;
    double apotema;
    double perimetro;
    int lados;

public:


    Poligono();

    void setLados(int);
    void setLongLado(double);


    void calcularPerimetro();
    void calcularApotema();
    void calcularArea();

};

Poligono::Poligono()
{

}

void Poligono::setLados(int l)
{
    this->lados=l;
}

void Poligono::setLongLado(double l)
{
    this->longLado= l;
}

void Poligono::calcularPerimetro()
{
    this->perimetro= lados*longLado;
}

void Poligono::calcularApotema()
{

    float teta = (180/lados)* M_PI/180;

    this->apotema = longLado/(2*tan(teta));
}

void Poligono::calcularArea()
{
    this->area = 0.5* perimetro * apotema;

}

#endif // POLIGONO_H_INCLUDED
