#include <iostream >
#include <string>
#include "CrediBanco.h"
using namespace std;
CrediBanco::CrediBanco()
{
    //ctor
}
void CrediBanco:: caratula(){
    cout<<"     //*******************************************************************************************************//"<<endl<<"                        Bienvenido a CrediBanco "<<endl;
    cout <<"    Su banco de confianza "<<endl;
    cout<< "    Aqui podra tener sus cuentas dependiendo de sus necesidades "<<endl;
    cout<< "    En nuestro banco usted tendra seguridad y planes de interes a largo plazo"<<endl ;
    cout<< "    Para crear su cuenta primero ingresara que tipo de tarjeta quiere "<<endl ;
    cout<< "           A=debito ";
    cout<< "           B=credito ";
    cout<< "           C=cuenta de ahorro ";
    cin >>tipo ;
    if (tipo =="a"  ||  tipo =="debito"  ||  tipo =="A"){
        cout <<"felicidades usted acaba de recibir una tarjeta de debito "<<endl ;
    }



}

CrediBanco::~CrediBanco()
{
    //dtor
}
