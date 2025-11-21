#ifndef CREDIBANCO_H
#define CREDIBANCO_H

#include <string>


class Credibanco {

protected:
    std::string numeroCuenta;
    double saldo;

public:
    Credibanco(std::string numeroCuenta, double saldoInicial);

    // Métodos base
    virtual void depositar(double monto);
    virtual bool retirar(double monto);
    double obtenerSaldo() const;
    void obtenerNumeroCuenta() const;

    // Método virtual para extender en clases hijas
    virtual void caratula() const;
};

#endif


