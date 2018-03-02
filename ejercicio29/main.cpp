#include <iostream>
#include <time.h>
#include <stdlib.h>
/*El programa le pide al suario que piense un numero luego este lo intentara adivinar con las pistas que el usuario le da*/
using namespace std;

int main()
{
    int inferior=0,superior=100, numero=0, final=0;
    char entrada;

    while(1){
    srand(time(NULL));
    cout<<"señor usuario piense un numero por favor entre el 1 y el 100"<<endl;
    numero=inferior+rand()%(superior-inferior);
    cout<<"El numero es: "<<numero<<" de ser verdadero por favor ingrese un =, de ser mayor ingrese > y de ser menor por favor ingrese < "<<endl;
    cin>>entrada;
    switch (entrada) {
    case '=':
        final=1;
        break;
    case '<':
        superior=numero;
        break;
    case '>':
        inferior=numero;
        break;
    default:
        cout<<"el caracter eiongresadono es valido"<<endl;
        break;

    }

    if(final==1)
        break;
    }

    return 0;
}
