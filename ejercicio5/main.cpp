#include <iostream>
/*El programa pide dos numeros y hace la divison entre ellos aproximando su resultado, por ejemplo 8/3=2.66666666666... el lo aproximara a 3 */
using namespace std;

int main()
{
    int denominador=0, numerador=0, division=0,total=0;
    float x=0;

    cout << "ingrese el numerador: ";
    cin>>numerador;
    cout << "ingrese el denomainador: ";
    cin>>denominador;
    division=numerador%denominador;
    x=(float)numerador/(float)denominador;
    if(division==0){
        division=numerador/denominador;
        cout<<"el resultado aproximado es: "<<division<<endl;
                    }
    else{
        total=x*10;
        total=total%10;
        if(total<5)
            division=numerador/denominador;
        else
            division=(numerador/denominador)+1;
        cout<<"el resultado aproximado es: "<<division<<endl;
    }

    return 0;
}
