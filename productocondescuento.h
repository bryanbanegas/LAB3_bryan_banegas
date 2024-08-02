#ifndef PRODUCTOCONDESCUENTO_H
#define PRODUCTOCONDESCUENTO_H
#include "producto.h"

class productoConDescuento: public producto
{
protected:
    double descuento;
public:
    productoConDescuento(QString& nombre, double precio, QString& descripcion, double descuento)
        : producto(nombre, precio, descripcion), descuento(descuento){}

    double calcularValorTotal(){
        double precio=producto::calcularValorTotal();
        return precio*(descuento/100);
    }
    QString mostrarInformacion(){
        QString info=producto::mostrarInformacion();
        info+="Descuento: %"+QString::number(descuento)+"\n";
        return info;
    }
};

#endif // PRODUCTOCONDESCUENTO_H
