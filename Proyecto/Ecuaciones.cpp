#include <iostream>
#include "Ecuacion.h"
using namespace std;

void Coordenadas(float& x, float&y);
char TipoEcu();
float Pendiente(float& p);

int main() {
    Ecuacion Rectas;
    float x=0, y=0, p=0;
    float a=0, b=0;
    char ecuacion;
    cout<<"<3************* Convertidor de ecuaciones de la recta*********<3 \n";
    cout<<"Bienvenido. Este programa esta disenado para dar como respuesta una ecuacion de la recta \n"
          "dados un punto y la pendiente.\n";
    cout<<"Ingresa la ecuacion que deseas:\n ";
    ecuacion= TipoEcu();
    switch (ecuacion) {
        case 'P':
            cout<<"Ingresa los valores del punto:\n";
            Coordenadas(x,y);
            Rectas.Punto(x,y);
            cout<<"Ingresa la pendiente:\n";
            Pendiente(p);
            Rectas.PendM(p);
            Rectas.PuntoPendiente(a,b);
            if (Rectas.ValorX()<0 && Rectas.ValorY()<0){
                cout<<"La ecuacion punto pendiente es:\n";
                cout<<"y"<<Rectas.ValorY()<<"="<<Rectas.ValorM()<<"(x"<<Rectas.ValorX()<<")";}
            if (Rectas.ValorX()>0 && Rectas.ValorY()>0){
                cout<<"La ecuacion punto pendiente es:\n";
                cout<<"y+"<<Rectas.ValorY()<<"="<<Rectas.ValorM()<<"(x+"<<Rectas.ValorX()<<")";}
            if (Rectas.ValorX()>0 && Rectas.ValorY()<0){
                cout<<"La ecuacion punto pendiente es:\n";
                cout<<"y"<<Rectas.ValorY()<<"="<<Rectas.ValorM()<<"(x+"<<Rectas.ValorX()<<")";}
            if (Rectas.ValorX()<0 && Rectas.ValorY()>0){
                cout<<"La ecuacion punto pendiente es:\n";
                cout<<"y+"<<Rectas.ValorY()<<"="<<Rectas.ValorM()<<"(x"<<Rectas.ValorX()<<")";}

              break;
        case 'O':
            cout<<"Ingresa los valores del punto:\n";
            Coordenadas(x,y);
            Rectas.Punto(x,y);
            cout<<"Ingresa la pendiente:\n";
            Pendiente(p);
            Rectas.PendM(p);
            Rectas.OrdenadaOrigen(p);
            if(Rectas.ValorX()>0){
                cout<<"La ecuacion pendiente-ordenada al origen es: \n";
                cout<<"y="<<Rectas.ValorM()<<"x+"<<Rectas.ValorX();}
            if(Rectas.ValorX()<0){
                cout<<"La ecuacion pendiente-ordenada al origen es: \n";
                cout<<"y="<<Rectas.ValorM()<<"x"<<Rectas.ValorX();}
            break;
        case 'S': ;
            cout<<"Ingresa la abscisa(x) y la ordenada(y) en el origen: \n";
            Coordenadas(x,y);
            Rectas.Punto(x,y);
            Rectas.FormaSimetrica(a,b);
            if(Rectas.ValorX()>0 && Rectas.ValorY()>0){
                cout<<"La ecuacion en la forma simetrica es: \n";
                cout<<"x/"<<Rectas.ValorX()<<"+y/"<<Rectas.ValorY()<<"=1";}
            if(Rectas.ValorX()<0 && Rectas.ValorY()<0){
                cout<<"La ecuacion en la forma simetrica es: \n";
                cout<<"-x/"<<-(Rectas.ValorX())<<"-y/"<<-(Rectas.ValorY())<<"=1";}
            if(Rectas.ValorX()>0 && Rectas.ValorY()<0){
                cout<<"La ecuacion en la forma simetrica es: \n";
                cout<<"x/"<<(Rectas.ValorX())<<"-y/"<<-(Rectas.ValorY())<<"=1";}
            if(Rectas.ValorX()<0 && Rectas.ValorY()>0){
                cout<<"La ecuacion en la forma simetrica es: \n";
                cout<<"-x/"<<-(Rectas.ValorX())<<"+y/"<<(Rectas.ValorY())<<"=1";}
            break;
        case 'G':
            cout<<"Ingresa los valores del punto:\n";
            Coordenadas(x,y);
            Rectas.Punto(x,y);
            cout<<"Ingresa la pendiente:\n";
            Pendiente(p);
            Rectas.PendM(p);
            Rectas.FormaGeneral(p);
            if(Rectas.ValorX()<0 ){
                cout<<"La ecuacion en la forma general es: \n";
            cout<<Rectas.ValorM()<<"x-y"<<Rectas.ValorX()<<"=0";}
            if(Rectas.ValorX()>0){
                cout<<"La ecuacion en la forma general es: \n";
                cout<<Rectas.ValorM()<<"x-y+"<<Rectas.ValorX()<<"=0";}
            break;
    }
    return 0;}


char TipoEcu(){
    char ec;
    do {
        cout << "Ecuacion ('P' para punto pendiente, 'O' para ordenada al origen,\n"
                " 'S' para forma simetrica, 'G' para forma general): ";
        cin >> ec;
    } while (ec != 'P' && ec != 'O' && ec != 'S' && ec != 'G');
    return ec;

}
float Pendiente(float& p){
    cout << "m: ";
    cin >> p;
return p;}

void Coordenadas(float& x, float& y){
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;}
