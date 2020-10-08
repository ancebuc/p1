//
// Created by ancebuc on 08/10/2020.
//
/*
Nombre:
Grupo:
Nombre del fichero:
Descripción:
*/

 #include "Circunferencia.h"
 #include <cmath>;

Circunferencia::Circunferencia(){
    Circunferencia::radio=0.0;
};
Circunferencia::Circunferencia(double r){
    Circunferencia::radio=r;
};
double Circunferencia::getRadio(){
    return (this->radio);
};
void Circunferencia::setRadio(double r){
    this->radio=r;
};
double Circunferencia::getDiametro(){
    return (getRadio()*2);
};
void Circunferencia::setDiametro(double d){
    this->radio=d/2;
};
double Circunferencia::getLongitud(){
    return (PI*getDiametro());
};
void Circunferencia::setLongitud(double l){

};
double Circunferencia::getArea(){
    return (PI*pow(getRadio(),2));
};
void Circunferencia::setArea(double a){

};
