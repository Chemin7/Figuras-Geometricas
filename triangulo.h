#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

class Triangulo{
private:
    double base;
    double altura;
    double area;
public:
    Triangulo();

    void setBase(double);
    void setAltura(double);
    double getBase();
    double getAltura();
    double getArea();

    void calcularArea();
};

Triangulo::Triangulo()
{

}

void Triangulo::setBase(double b)
{
    this->base=b;
}

void Triangulo::setAltura(double a)
{
    this->altura=a;
}

double Triangulo::getBase()
{
    return this->base;
}

double Triangulo::getAltura()
{
    return this->altura;
}

double Triangulo::getArea()
{
    return this->area;
}

void Triangulo::calcularArea()
{
    this->area= (base*altura)/2;
}

#endif // TRIANGULO_H_INCLUDED
