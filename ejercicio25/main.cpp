#include <iostream>
/*el programa le pide a el usuario un numero entero y el procede a decir cuatos decimales cuenta*/
using namespace std;

int main()
{
    int numero=0, digitos=1, modulo=0, x=0;
    cout << "ingrese el numero el cual quiere saber la cantidad de digitos: ";
    cin>>numero;
    x=numero;
    while (numero>10||numero<-10) {//while para hacerlo con positivos y negativos

        numero=(numero/10)+modulo;
        digitos++;



    }

    cout <<x<< " tiene " <<digitos<<" digitos"<< endl;
    return 0;
}
