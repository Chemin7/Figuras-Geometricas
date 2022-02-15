#include <iostream>
#include "poligono.h"
#include "triangulo.h"

using namespace std;

/**poligono 5 a 10
 calcular apotema
 **/

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

int main()
{
    double base(0),altura(0);
    int opc(0);

    Poligono p;
    Triangulo t;
    do{
        system("cls");
        cout<<"Ingerese la altura: ";
        cin>>altura;
        cout<<"Ingrese la base: ";
        cin>>base;
        t.setAltura(altura);
        t.setBase(base);
        t.calcularArea();
        cout<<"El area del triangulo es: "<<t.getArea()<<endl;;

        cout<<"continuar si-1 no-2: ";
        cin>>opc;

    }while(opc != 2);
    return 0;
}
