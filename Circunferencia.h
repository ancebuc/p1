//
// Created by ancebuc on 08/10/2020.
//

#ifndef PRACTICA0101P01_CIRCUNFERENCIA_H
#define PRACTICA0101P01_CIRCUNFERENCIA_H



class Circunferencia {
    private:
        double radio;
        constexpr static double PI=3.1416;

    public:
        Circunferencia();
        Circunferencia(double r);
        double getRadio();
        void setRadio(double r);
        double getDiametro();
        void setDiametro(double d);
        double getLongitud();
        void setLongitud(double l);
        double getArea();
        void setArea(double a);

};


#endif //PRACTICA0101P01_CIRCUNFERENCIA_H
