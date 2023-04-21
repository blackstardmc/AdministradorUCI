#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <Administrador.h>
#include <Equipo.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    void clear();
    QString marcas[5]{"Sony","Sanyo","LG","Panda","Atec"};
    QString tipoMuebles[5]{"Silla","Mesa","Buro","Cama","Mueble PC"};
    Ui::MainWindow *ui;
    Equipo *equipo;
    Administrador admin;
};
#endif // MAINWINDOW_H
