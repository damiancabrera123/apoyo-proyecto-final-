#ifndef CREDIBANCO_H
#define CREDIBANCO_H

#include <String_>


class Credibanco {

protected:
    String_ numeroCuenta;
    double saldo;
    String_ tipo ;
public:
    Credibanco(String_ numeroCuenta, double saldoInicial);

    // Métodos base
    virtual void depositar(double monto);
    virtual bool retirar(double monto);
    double obtenerSaldo() const;
    void obtenerNumeroCuenta() const;

    // Método virtual para extender en clases hijas
    virtual void caratula() const;
};

#endif



