#include <iostream>

using namespace std;
int main()
{


    int tam;
    int m[100][100];
    cout<<"ingrese el tamaño de la matriz :"<<endl;
    cin>>tam;

    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            cout<<"ingrese los elementos de la matriz : ["<<i<<"]["<<j<<"]";
            cin>>m[i][j];

        }
    }

    cout<<"la matriz es: "<<endl;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){

            cout<<m[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;

    int sum1=0;
    for(int i=0;i<tam;i++){
        sum1=sum1+m[i][i];
    }
    //cout<<"la suma de la diagonal 1 es:"<<sum1<<endl;

    int sum2=0;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(j+i==tam-1){
                sum2=sum2+m[i][j];
            }

        }

    }
    //cout<<"la suma de la diagonal 2 es:"<<sum2<<endl;



    for(int i=0;i<tam;i++){
        int sumf=0,sumc=0;
        for(int j=0;j<tam;j++){
            sumf=sumf+m[i][j];
            sumc=sumc+m[j][i];





        }
        if((sumc==sumf)&&(sum1=sum2)&&(sumc==sum1)&&(sumf=sum2)){
            cout<<"la matriz es cuadrada"<<endl;
            return 0;

        }
        else{
            cout<<"no es cuadrada "<<endl;
            return 0;
        }


       // cout<<"la suma de la fila "<<i+1<<"es :"<< sumf<<endl;
        //cout<<"la suma de la columna "<<i+1<<"es :"<< sumc<<endl;

    }

    return 0;
}
