#include <iostream>

#include "funciones.h"

using namespace std;
//funciones


int main()
{

    srand(time(NULL));//INICIALIZAR SEMILLA RANDOM
    mostrarmenu();
    char opc;
    do {
        cout<<endl;
        cout<<"dame una opcion:"<<endl;
        cin>> opc;
        switch(opc){
            case 'x':
            cout<<"saliendo del sistema.........."<<endl;
            return 0;
            break;
            case 'y':
            inicializarsala();
            mostrarsala();
            break;
            case 'z':
            reserva();
            break;
            case 'w':




            break;

        }
    } while (opc !=0);
    return 0;
}




























