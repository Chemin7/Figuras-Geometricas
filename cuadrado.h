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


#endif // CUADRADO_H_INCLUDED
