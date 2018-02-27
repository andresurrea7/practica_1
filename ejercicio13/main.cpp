#include <iostream>
/*El programa le pide alususario un numero y este halla sus divisores. ejemplo 4 = 1,2,4*/
using namespace std;

int main()
{
    int numero=0, divisor=0;
    cout << "ingrese el numero al que desea saber sus divisores: ";
    cin>>numero;
    for(int i=1 ;i<=numero;i++){
        divisor=numero%i;
        if(divisor==0)
            cout<<i<<" Es divisor de "<<numero<<endl;
    }



    return 0;
}
