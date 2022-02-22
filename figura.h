#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED


class Figura{
protected:
    double base;
    double altura;
    double area;
public:
    Figura();

    void setBase(double);
    void setAltura(double);

    double getArea();

};

Figura::Figura()
{

}

void Figura::setBase(double b)
{
    base = b;
}

void Figura::setAltura(double a)
{
 altura = a;
}

double Figura::getArea()
{
    return area;
}


#endif // FIGURA_H_INCLUDED
