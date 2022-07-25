#include <iostream>
#include "funcion_16.h"

using namespace std;


int main()
{
    char n[1]={};
         int ni,lado_malla;
         cout<<"Ingrese el valor del lado de la malla: ";
         cin>>n;
         ni=validar_numero(n); //Hago validar la entrada del usuario
         lado_malla=(factorial(ni+ni))/((factorial(ni))*(factorial(ni)));//Calculo el numero de caminos posibles
         cout<<"\nEl numero de caminos posibles es: "<<lado_malla<<endl;
    return 0;
}

