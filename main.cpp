#include <iostream>
#include <string>
#include "poligono.h"
#include "triangulo.h"
#include "rectangulo.h"
#include "cuadrado.h"
#include "validate.h"

using namespace std;


void menu() {
    int opc;
    Cuadrado c;
    Triangulo t;
    Rectangulo r;
    Poligono p;

    cout<<"-----------MENU------"<<endl;
    cout<<"Calcular el area de: "<<endl;
    cout<<"1)Cuadrado"<<endl;
    cout<<"2)Triangulo"<<endl;
    cout<<"3)Rectangulo"<<endl;
    cout<<"4)Poligono"<<endl;
    cout<<"Seleccione una opcion: ";
    cin>>opc;

    switch(opc) {
        case 1:{
            string lado;

            do {
                cout<<"Ingresa el tamaño del cuadrado: ";
                cin>>lado;

                }
            while(!isReal(lado));

            c.setLado(stof(lado));

            c.calcularArea();
            cout<<"El area del cuadrado es: "<<c.getArea()<<endl;
        }

            break;
        case 2:{
            string base,altura;

            do {
                cout<<"Ingresa el tamaño de la base del triangulo: ";
                cin>>base;
                cout<<"Ingresa el tamaño de la altura del triangulo: ";
                cin>>altura;
                }
            while( !( isReal(base) and isReal(altura) ) );

            t.setAltura(stof(altura));
            t.setBase(stof(base));

            t.calcularArea();
            cout<<"El area del triangulo es: "<<t.getArea()<<endl;
        }
            break;
        case 3:{
           string base,altura;

            do {
                cout<<"Ingresa el tamño de la base del rectangulo: ";
                cin>>base;
                cout<<"Ingresa el tamaño de la altura del rectangulo: ";
                cin>>altura;
                }
            while( !( isReal(base) and isReal(altura) ) );

            r.setAltura(stof(altura));
            r.setBase(stof(base));

            r.calcularArea();
            cout<<"El area del rectangulo es: "<<r.getArea()<<endl;
        }

            break;
        case 4:{
             string lados,longLad;
            bool expr1,expr2;
            do {
                cout<<"Ingresa el numero de lados del poligono: ";
                cin>>lados;
                cout<<"Ingresa el tamaño de el lado del poligono: ";
                cin>>longLad;
                cout<<endl;
           } while( !( isInt(lados) and isReal(longLad)) or !(stoi(lados) >= 5 && stoi(lados) <= 10) )  ;


            p.setLados(stoi(lados));
            p.setLongLado(stof(longLad));

            p.calcularApotema();
            p.calcularPerimetro();
            p.calcularArea();

            cout<<"El area del poligono es: "<<p.getArea()<<endl;
            break;
        }
        default:
            cout<<"Opcion ingresada invalida"<<endl;

        }
    }

int main() {

    char opc;

    do{
        system("cls");
        menu();
        cout<<"Quieres continuar [S]i o [N]o: ";
        cin>>opc;
    }while(opc=='s');



    return 0;
    }
