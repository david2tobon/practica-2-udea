#ifndef FUNCIONES14_H
#define FUNCIONES14_H
#include <iostream>

using namespace std;

int matriz[5][5],matriz2[5][5],matriz3[5][5],matriz4[5][5],num=1;

void matriz_original(){


             //Los valores se escogen al azar
             for(int i=0;i<5;i++){
                 for(int j=0;j<5;j++){
                    matriz[i][j]=num;
                    num++;
                 }
             }

             cout<<"Matriz original: "<<"\n"<<endl;
             for(int i=0;i<5;i++){
                 for(int j=0;j<5;j++){
                     cout<<'\t'<<matriz[i][j]<<'\t';
                 }
                cout<<"\n";
             }

}

void rotar_90(int matriz[5][5],int matriz2[5][5]){

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           matriz2[i][j]=matriz[(4-j)][(i)];
           //*(*(matriz2+i)+j)=*(*(matriz+4+i)-j);
        }
    }
    //Reasigno valores para nuevamente rotar la matriz
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           matriz[i][j]=matriz2[i][j];
        }
    }


    cout<<"Matriz rotada 90 grados: "<<"\n"<<endl;
         for(int i=0;i<5;i++){
             for(int j=0;j<5;j++){
                 cout<<'\t'<<matriz2[i][j]<<'\t';
                }
            cout<<"\n";
         }

}


void rotar_180(int matriz2[5][5],int matriz3[5][5]){

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           matriz3[i][j]=matriz2[(4-j)][(i)];
        }
    }
    //Reasigno valores para nuevamente rotar la matriz
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           matriz2[i][j]=matriz3[i][j];
        }
    }


    cout<<"Matriz rotada 180 grados: "<<"\n"<<endl;
         for(int i=0;i<5;i++){
             for(int j=0;j<5;j++){
                 cout<<'\t'<<matriz3[i][j]<<'\t';
                }
            cout<<"\n";
         }

}


void rotar_270(int matriz3[5][5],int matriz4[5][5]){

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           matriz4[i][j]=matriz3[(4-j)][(i)];
        }
    }
    //Reasigno valores para nuevamente rotar la matriz
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           matriz3[i][j]=matriz4[i][j];
        }
    }


    cout<<"Matriz rotada 270 grados: "<<"\n"<<endl;
         for(int i=0;i<5;i++){
             for(int j=0;j<5;j++){
                 cout<<'\t'<<matriz4[i][j]<<'\t';
                }
            cout<<"\n";
         }

}


















#endif // FUNCIONES14_H
