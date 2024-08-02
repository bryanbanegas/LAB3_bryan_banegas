#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
int tipo=0;
void MainWindow::on_agregar_clicked()
{
    QString nombre=ui->nombre_Line->text();
    QString precioPrueba=ui->precio_Line->text();
    QString descripcion=ui->descripcion_Line->text();
    bool a;
    double precio=precioPrueba.toDouble(&a);

    if(tipo==0){
        QString dato=ui->dato_Line->text();
        double descuento=dato.toDouble(&a);
        producto* product=new productoConDescuento(nombre, precio, descripcion, descuento);
        productos.agregarProducto(product);
    }else{
        int cantidad=ui->dato_Line->text().toInt();
        producto* product=new productoConStock(nombre, precio, descripcion, cantidad);
        productos.agregarProducto(product);
    }
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    tipo=index;
    switch(tipo){
    case 0:
        ui->label_4->setText("Descuento:");
        break;
    case 1:
        ui->label_4->setText("Cantidad:");
        break;
    }
}


void MainWindow::on_eliminar_clicked()
{
    QString nombre=ui->nombre_Line_2->text();
    productos.eliminar(nombre);
}


void MainWindow::on_agregar_2_clicked()
{
    ui->textEdit->setText(productos.mostrarInventario());
}


void MainWindow::on_agregar_3_clicked()
{
    ui->textEdit->setText("Valor de Inventario Total: "+QString::number(productos.calcularValorInventario()));
}

