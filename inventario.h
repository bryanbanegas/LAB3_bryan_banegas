#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "producto.h"
#include "QVector"

class inventario
{
private:
    QVector<producto*> productos;
public:
    inventario();

    void agregarProducto(producto* product){
        productos.append(product);
    }
    void eliminar(QString& nombre){
        for(int i=0;i<productos.size();i++){
            if(nombre==productos.at(i)->getNombre()){
                producto* product=productos.at(i);
                productos.removeAt(i);
                delete product;
            }
        }
    }
    QString mostrarInventario(){
        QString info="";
        for(int i=0;i<productos.size();i++){
            info+=productos.at(i)->mostrarInformacion();
        }
        return info;
    }
    double calcularValorInventario(){
        double valor=0;
        for(int i=0;i<productos.size();i++){
            valor+=productos.at(i)->calcularValorTotal();
        }
        return valor;
    }
};

#endif // INVENTARIO_H
