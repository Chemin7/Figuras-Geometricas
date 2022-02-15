#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

class Rectangulo
{

private:
    double base;
    double altura;
    double area;
public:
    Rectangulo();

    void setBase(double);
    void setAltura(double);
    double getBase();
    double getAltura();
    double getArea();

    void calcularArea();

};
Rectangulo::Rectangulo()
{

}


void Rectangulo::setBase(double)
{
    return this->base;
}

void Rectangulo::setAltura(double)
{
    return this->altura;
}

double Rectangulo::getBase()
{
    return this->base;
}

double Rectangulo::getAltura()
{
    return this->altura;
}

double Rectangulo::getArea()
{
    return this->area;
}

void Rectangulo::calcularArea()
{
    this->area = (base * altura);
}

#endif // RECTANGULO_H_INCLUDED
