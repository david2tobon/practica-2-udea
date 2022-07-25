#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

char salacine[15][20];

int filas=15;
int asientos=20;
int fila=1;
int asiento=1;





void mostrarmenu(){
    cout<<"****************BIENVENIDOS************"<<endl<<endl;
    cout<<"  opc:  x salir"<<endl;
    cout<<"  opc:  y mostrar ocupacion de la sala"<<endl;
    cout<<"  opc:  z reservar asientos"<<endl;
    cout<<"  opc:  w cancelar reserva"<<endl<<endl;

    cout<<"***************************************"<<endl;

}


void mostrarsala(){
    char let[]="ABCDEFGHIJKLMNO";
    cout<<"    1    2    3    4    5    6    7    8    9   10   11   12    13   14   15   16   17   18   19   20"<<endl<<endl;

    for(int i=1;i<=filas;i++){
        cout<<let[i]<<" ";
        for(int j=1;j<=asientos;j++){
            cout<<"[ "<<*(*(salacine+i)+j)<<" ]";
        }
        cout<<"\n\n\n";
    }
}

void inicializarsala(){
    for(int i=1;i<=filas;i++){
        for(int j=1;j<=asientos;j++){
            *(*(salacine+i)+j)=rand()%2;
            if(*(*(salacine+i)+j)==1){
                *(*(salacine+i)+j)='+';
            }
            else{
                *(*(salacine+i)+j)='-';
            }
        }
    }
}

bool verificar(int fila,int asiento){
    if(*(*(salacine+fila)+asiento)=='-'){
        *(*(salacine+fila)+asiento)=1;
        return true;
    }
    else {
        cout<<"este asiento esta ocupado."<<endl;

    }
    return false;
}

void reserva(){
    do {
        cout<<"ingrese la fila (A-O) :"<<endl;
        cin>>fila;
        cout<<"ingrese el asiento (1-20) :"<<endl;
        cin>>asiento;
    } while (verificar(fila,asiento)==false);
    cout<<"el asiento fue asignado correctamente"<<endl;
}






bool verificar_can(int fila,int asiento){
    if(*(*(salacine+fila)+asiento)=='+'){
        *(*(salacine+fila)+asiento)=0;
        return false;
    }

    return false;
}






















#endif // FUNCIONES_H
