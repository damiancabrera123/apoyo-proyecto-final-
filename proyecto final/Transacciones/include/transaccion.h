#ifndef TRANSACCION_H
#define TRANSACCION_H
using namespace std ;

class transaccion
{
    public:
        transaccion();
        transaccion(int id, int usuario)
        void deposito();
        void retiro  ();
        virtual ~transaccion();

    protected:

    private:
};

#endif // TRANSACCION_H
