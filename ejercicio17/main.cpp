#include <iostream>
/*El programa le pide numeros al usario hasta que este ingresa el 0 luego meustra el mayor de todos los numeros ingresados.*/
using namespace std;

int main()
{
    int numero=0, mayor=-1;

    while(1){
        cout << "Por favor ingrese numero utilice 0 para dejar de ingresar nueros: ";
        cin>>numero;
        if(numero>mayor)
            mayor=numero;
        else if(numero==0){
                cout << "El mayor es: " <<mayor<< endl;
                break;




        }

    }


    return 0;
}
