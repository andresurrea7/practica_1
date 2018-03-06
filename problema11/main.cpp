#include <iostream>

using namespace std;

int main()
{
    int numero=0,mcm=1,division=1,divisioncaso,numero2=0;
    cout<<"ingrese el numero mayor en elque desea calcular el miinimi comun multiplo de todos los numeros hasta el: ";
    cin>>numero;
    while (numero>=0) {
        numero2=numero;
        divisioncaso=division;
        for(int i=0;i<=numero2;i++){
        if(numero%divisioncaso==0){
            //numero2=numero/divisioncaso;
            mcm=mcm*divisioncaso;}

         divisioncaso++;
    }
        numero -=1;

    }
    mcm=mcm/2;
    cout << "mcm: " <<mcm<< endl;
    return 0;
}
