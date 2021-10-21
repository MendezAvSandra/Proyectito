
#ifndef PROYECTO_ECUACION_H
#define PROYECTO_ECUACION_H


class Ecuacion {
private:
    float x,y,p,pen,r,s;
public:
    void Punto(float a, float b);
    void PendM(float m);
    float PuntoPendiente(float a, float b);
    float ValorX(), ValorY(), ValorM();
    float OrdenadaOrigen(float pen);
    float FormaSimetrica(float a, float b);
    float FormaGeneral(float pen);
};


#endif //PROYECTO_ECUACION_H
