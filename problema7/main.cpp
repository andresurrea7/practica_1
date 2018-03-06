#include <iostream>
/*El programa le pide al usuario que ingrese un numero y este suma todos los numeros que hay pares en la serie de Fibonacci hasta el.*/
using namespace std;

int main()
{
    int numero=1,suma=0,numero1=0,numero2=1, numeroserie=0;
    cout<<"ingrese el numero que desea saber la suma de los apres que hay hasta el en la serie de Fibonacci: ";
    cin>>numero;
    while(numeroserie<numero&&numero>0){
        numeroserie=numero1+numero2;
        numero1=numero2;
        numero2=numeroserie;

        if(numeroserie%2==0)
            suma=suma+numeroserie;

    }

    cout << "El resultado de la suma es: " <<suma<< endl;
    return 0;
}
