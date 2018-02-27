#include <iostream>
/*El programa le pide al usuario que ingrese una letra y este pasa a covertirla a mayuscula si es minuscula y viceversa. ejemplo e devuelve E*/
using namespace std;

int main()
{
    char letra;

    while (1) {
        cout << "ingrese la letra: ";
        cin>>letra;
        if(letra<=90&&letra>=65){
            letra=letra+32;
            cout<<letra<<endl;
            break;
            }
        else if(letra>=97&&letra<=122){
            letra=letra-32;
            cout<<letra<<endl;
            break;
            }
        else{
            cout<<"El caracter ingresado no es una letra"<<endl;
        }
    }
    return 0;
}
