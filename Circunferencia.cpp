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
 #include <cmath>

Circunferencia::Circunferencia(){
    this->radio=0.0;
}
Circunferencia::Circunferencia(double r){
    this->radio=r;
}
double Circunferencia::getRadio(){
    return (this->radio);
}
void Circunferencia::setRadio(double r){
    this->radio=r;
}
double Circunferencia::getDiametro(){
    return (this->radio*2);
}
void Circunferencia::setDiametro(double d){
    this->radio=d/2;
}
double Circunferencia::getLongitud(){
    return (PI*this->radio*2);
}
void Circunferencia::setLongitud(double l){
    this->radio=l/(2*PI);
}
double Circunferencia::getArea(){
    return (PI*pow(this->radio,2));
}
void Circunferencia::setArea(double a){
    this->radio=sqrt(a/PI);
}
