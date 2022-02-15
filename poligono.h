#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include <math.h>

using namespace std;

class Poligono{
private:
    double apotema;
    double perimetro;
    double longLado;
    int lados;
    double area;
public:
    Poligono();

    void setLados(int);
    void setLongLado(double);

    double getArea();

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

double Poligono::getArea()
{
    return this->area;
}

void Poligono::calcularPerimetro()
{
    this->perimetro= lados*longLado;
}

void Poligono::calcularApotema()
{
    this->apotema = longLado/(2*tan(180/lados));
}

void Poligono::calcularArea()
{
    this->area=1/2*perimetro*apotema;
}

#endif // POLIGONO_H_INCLUDED
