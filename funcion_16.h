#ifndef FUNCION_16_H
#define FUNCION_16_H

#include <iostream>

using namespace std;

char comprobar(char u){
    char lista[11]={'1','2','3','4','5','6','7','8','9','0'};
    bool r=false;
    for(int i=0;lista[i]!=0;i++){
        if(u==lista[i]){
            r=true;
            break;
        }
    }
    return r;
  }

int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
   }

int validar_numero(char *n){
    int ni;
    while(true){
        if(comprobar(n[0])){
           ni=atoi(n);
           break;
        }
        else{
            cout<<"Ingrese un valor numerico por favor"<<endl;
            cout<<"Ingrese el valor nuevamente: ";
            cin>>n;
            cout<<endl;
        }
    }
    return ni;
}
















#endif // FUNCION_16_H
