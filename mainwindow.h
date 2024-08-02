#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "producto.h"
#include "productocondescuento.h"
#include "productoconstock.h"
#include "inventario.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_agregar_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_eliminar_clicked();

    void on_agregar_2_clicked();

    void on_agregar_3_clicked();

private:
    Ui::MainWindow *ui;
    inventario productos;
};
#endif // MAINWINDOW_H
