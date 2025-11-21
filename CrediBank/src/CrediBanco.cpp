#include <iostream >
#include "CrediBanco.h"
using namespace std;

void CrediBanco:: caratula(){
    cout<<"     //*******************************************************************************************************//"<<endl;
    cout<<"                        Bienvenido a CrediBanco "<<endl;
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
    }else if (tipo =="b"  ||  tipo =="credito"  ||  tipo =="B"){
        cout <<"felicidades usted acaba de recibir una tarjeta de credito "<<endl ;
    }else if (tipo =="c"  ||  tipo =="cuenta de ahorro"  ||  tipo =="C"){
        cout <<"felicidades usted acaba de recibir una tarjeta de cuenta de ahorro "<<endl ;
    }
    cout<< "    Como siguiente paso vamos a pedirle sus datos para guardarlos en el sistema y asi asignarle su grupo de cuenta "<< endl ;
    cout<< "    Aparte se le dara ciertos beneficios en caso de ser parte de ser usuario premiun o preferencial "<< endl ;
    
Credibanco::Credibanco(std::string numero, double saldoInicial)
    : numeroCuenta(numero), saldo(saldoInicial) {}

}
void Credibanco::depositar(double monto) {
    saldo += monto;
}

bool Credibanco::retirar(double monto) {
    if (monto <= saldo) {
        saldo -= monto;
        return true;
    }
    return false;
}

double Credibanco::obtenerSaldo() const {
    return saldo;
}

void Credibanco::obtenerNumeroCuenta() const {
    cout<< numeroCuenta;
}
CrediBanco::~CrediBanco()
{
    //dtor
}




