#include <iostream>
/*El programa le pide al usuario ingresar un numero n y este halla el mcm de todos los numeros de 1 hasta n*/
using namespace std;

int main()
{
    int mcm=0, numero=0, multi=1,multiplica=0;
    cout << "ingrse el mayor numero para encontrar su mcm: ";
    cin >> numero;
    if(numero>0){
    while(1){
        multiplica=numero*multi;//operacion para hallar el mcm
        mcm=0;
        for(int j=numero;j>0;j--){ //ciclo for para mirar que los numeros menores a n tengan el mismo mcm
            if(multiplica%j==0){
                    mcm+=1;}
            }
        if(mcm==numero)
            break;
        multi++;
    }
    cout<<"El minimo comun multiplo es: "<<multiplica<<endl;
    }
    else
        cout<<numero<<" no es valido"<<endl;
    return 0;
}
