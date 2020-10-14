
/*
    Nombre:
    Grupo:
    Nombre del fichero: Principal_prac01_01.cpp
    Descripcion: cliente de la clase Circunferencia;
*/

#include <iostream>
#include "Circunferencia.h"

using namespace std;

int main (){

    // En las siguientes l�neas de c�digo declaramos dos objetos de la clase Circunferencia;
    // Cada uno de ellos es construido por medio de uno de los constructores propios de la clase

    // Cuidado con la declaraci�n de Circunferencia c1; o Circunferencia c1 ();
    // La segunda versi�n declarar�a una funci�n, no un objeto;

    Circunferencia c1;
    Circunferencia c2 (7.5);

    // Las siguientes l�neas de c�digo declaran dos punteros a objetos de la clase Circunferencia;
    // De nuevo cada uno hace uso de uno de los dos constructores disponibles en esta clase;

    Circunferencia * pc1 = new Circunferencia ();
    Circunferencia * pc2 = new Circunferencia (4.8);

    cout << "El �rea de la circunferencia pc1 es " << pc1->getArea() << endl;
    cout << "El �rea de la circunferencia pc2 es " << pc2->getArea() << endl;

    cout << "El �rea de la circunferencia c1 es " << c1.getArea() << endl;
    cout << "El �rea de la circunferencia c2 es " << c2.getArea() << endl;

    // Introduce aqu� tu propio c�digo correspondiente a los ejercicios 4 y siguientes;

    //Primer ejercicio:
    Circunferencia * cir1 = new Circunferencia();
    cir1->setArea(314.16);
    Circunferencia * cir2 = new Circunferencia(cir2->getRadio()+6);
    Circunferencia * cir3 = new Circunferencia();
    cir3->setLongitud(62.832);
    Circunferencia * cir4 = new Circunferencia(cir4->getRadio()*5);
    return 0;
}
