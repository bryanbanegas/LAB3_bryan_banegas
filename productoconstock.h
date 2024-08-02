#ifndef PRODUCTOCONSTOCK_H
#define PRODUCTOCONSTOCK_H
#include "producto.h"

class productoConStock: public producto
{
protected:
    int cantidad=0;
public:
    productoConStock(QString& nombre, double precio, QString& descripcion, int cantidad)
        : producto(nombre, precio, descripcion), cantidad(cantidad){}

    double calcularValorTotal(){
        double precio=producto::calcularValorTotal();
        return precio*cantidad;
    }
    QString mostrarInformacion(){
        QString info=producto::mostrarInformacion();
        info+="Cantidad en stock: "+QString::number(cantidad)+"\n";
        return info;
    }
};

#endif // PRODUCTOCONSTOCK_H
