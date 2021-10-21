//
// Created by hp on 18/10/2021.
//
#include "Ecuacion.h"

void Ecuacion::Punto(float a, float b){
    x=a;
    y=b;}
void Ecuacion::PendM(float m){
    pen=m;}
float Ecuacion::PuntoPendiente(float a, float b){
    x=-x;
    y=-y;}
float Ecuacion::OrdenadaOrigen(float pen){
    y=y;
    x=pen*(-x)+y;}
float Ecuacion::FormaSimetrica(float a, float b) {
    x=x;
    y=y;}
float Ecuacion::FormaGeneral(float pen) {
    y=-y;
    x=pen*(-x)-y;}

float Ecuacion::ValorX(){
    return x;}
float Ecuacion::ValorY(){
    return y;}
float Ecuacion::ValorM(){
    return pen;}
