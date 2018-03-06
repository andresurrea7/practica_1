#include <iostream>
/*El programa le pide al usuario que ingrese un mes y un dia luego este mirará si ers una fecbha valida o no y lo mostrara en pantalla*/
using namespace std;

int main()
{
    int mes=0, dia=0;
    cout<<"ingrese el mes: ";
    cin>>mes;
    cout<<"ingrese el dia: ";
    cin>>dia;

    if(mes==1){
        if(dia<=31&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==2){
        if(dia<=28&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else if(dia==29&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida solo en biciesto."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==3){
        if(dia<=31&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==4){
        if(dia<=30&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==5){
        if(dia<=31&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==6){
        if(dia<=30&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==7){
        if(dia<=31&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==8){
        if(dia<=31&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==9){
        if(dia<=30&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==10){
        if(dia<=31&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==11){
        if(dia<=30&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else if(mes==12){
        if(dia<=31&&dia>0)
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
        else{
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
            }
    }
    else{
        cout <<mes<< " es un mes invalido." << endl;
    }
    return 0;
}
