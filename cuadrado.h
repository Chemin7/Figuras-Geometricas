#ifndef CUADRADO_H_INCLUDED
#define CUADRADO_H_INCLUDED

class Cuadrado{
private:
    double lado;
    double area;
public:
    Cuadrado();

    void setLado(double);
    double getLado();
    double getArea();

    void calcularArea();
};

Cuadrado::Cuadrado(){
}

void Cuadrado::setLado(double l)
{
    this->lado=l;
}

double Cuadrado::getLado()
{
    return lado;
}

double Cuadrado::getArea()
{
    return area;
}

void Cuadrado::calcularArea()
{
    area=lado*lado;
}

#endif // CUADRADO_H_INCLUDED
