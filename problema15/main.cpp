#include <iostream>
/*El programa le pide al usuario un numero impar y luego este calcula la suma de la espiral de la matris nxn*/
using namespace std;

int main()
{
    int numero=0, patron=2,suma=1,numero2=1;
    cout << "Ingrese el numero para calcular la suma de su diagonal: ";
    cin>>numero;
    if(numero%2!=0){//if para comprobar de que sea impar
    for(int i=1;i<numero;i++){
        if(numero2==numero*numero)
            break;
        for (int j=0;j<4;j++) {//for para seguir la secuencia de la epiral y hallar los numeros para sumar
            numero2=numero2+patron;
            suma+=numero2;

        }
    patron+=2;
    }
    cout<<"En una epiral "<<numero<<"x"<<numero<<", la suma de la espiral es: "<<suma<<endl;
    }
    else
        cout<<"caracter invalido"<<endl;

    return 0;
}
