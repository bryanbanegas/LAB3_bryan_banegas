#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "QString"

class producto
{
protected:
    QString nombre;
    double precio;
    QString descripcion;
public:
    producto(QString& nombre, double precio, QString& descripcion)
        : nombre(nombre), precio(precio), descripcion(descripcion){}

    QString getNombre(){
        return nombre;
    }
    virtual double calcularValorTotal(){
        return precio;
    }
    virtual QString mostrarInformacion(){
        QString info;
        info="Nombre del producto: "+nombre+", Precio del producto L."+QString::number(precio)+"\n";
        info+="Descripcion: "+descripcion+"\n";
        return info;
    }

    virtual ~producto() {}
};

#endif // PRODUCTO_H
