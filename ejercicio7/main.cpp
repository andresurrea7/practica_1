#include <iostream>
/*El programa le pide un numero al usuario y luego suma todos los numeros hasta el. elemplo 3 esto seria igual a 1+2+3=6*/
using namespace std;

int main()
{
    int numero=0,suma=0,numero2,i=0;
    cout<<"ingrese el numero: ";
    cin>>numero;
    numero2=numero;
    while(i!=numero){
        suma=suma+numero2;
        numero2=numero2-1;
        i++;
                    }




    cout << "el resultado es: "<<suma << endl;
    return 0;
}
