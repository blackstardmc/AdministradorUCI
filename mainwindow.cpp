#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <Mobiliario.h>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    admin.insertar(new Electronico("Sanyo","A",5,"Mal","Miguel","23","TV",45));
    admin.insertar(new Electronico("LG","A",4,"Mal","Miguel","21","TV",45));
    admin.insertar(new Electronico("Panda","A",3,"Bueno","Miguel","2","TV",45));
    admin.insertar(new Electronico("Sanyo","A",2,"Bueno","Miguel","24","TV",45));
    admin.insertar(new Electronico("Sanyo","A",1,"Bueno","Miguel","212","PC",45));

    admin.insertar(new Mobiliario(4,"Oficina","Bueno","Miguel","212","Cama",45));

    admin.insertar(new Mobiliario(4,"Oficina","Bueno","Miguel","212","Cama",45));

    admin.insertar(new Mobiliario(4,"Oficina","Bueno","Miguel","22","Mesa",45));

    admin.insertar(new Mobiliario(4,"Oficina","Bueno","Miguel","21","Mesa",45));

    admin.insertar(new Mobiliario(4,"Oficina","Bueno","Miguel","212","Cama",45));

    ui->setupUi(this);
    ui->comboBox_2->hide();
    ui->comboBox_4->hide();
    ui->radioButton->setChecked(true);




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
QString b;
QString a="";
for(int i=0;i<5;i++){
    a+=marcas[i]+" "+b.setNum(admin.equiposDadaUnaMarcaTipo(ui->comboBox_5->currentText(),marcas[i]))+"\n";
}
ui->laberDesglosarM->setText(a);
}


void MainWindow::on_radioButton_clicked()
{
    ui->lotro1->setText("Otro Proveedor");
    ui->lotro2->setText("Marca");
    ui->lotro3->show();
    ui->comboBox_6->show();
    ui->lotro4->show();
    ui->comboBox_2->hide();
    ui->comboBox_4->hide();
    ui->comboBox_3->show();
    ui->otro4->show();

}


void MainWindow::on_radioButton_2_clicked()
{

    ui->lotro1->setText("Tiempo de vida");
    ui->lotro2->setText("Local");
    ui->comboBox_6->hide();
    ui->comboBox_2->show();
    ui->comboBox_3->hide();
    ui->lotro3->show();
    ui->lotro4->hide();
    ui->comboBox_4->show();
    ui->otro4->hide();

}


void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        equipo=new Electronico(ui->comboBox_6->currentText(),
                               ui->otro1->text(),
                               ui->otro4->text().toInt(),
                               ui->comboBox->currentText(),
                               ui->provedorLine->text(),
                               ui->numeroLine->text(),
                               ui->comboBox_3->currentText(),
                               ui->precioUnitarioLine->text().toInt()
                              );
        admin.insertar(equipo);

    }
    else{
        equipo=new Mobiliario(ui->otro1->text().toInt(),
                              ui->comboBox_2->currentText(),
                              ui->comboBox->currentText(),
                              ui->provedorLine->text(),
                              ui->numeroLine->text(),
                              ui->comboBox_4->currentText(),
                              ui->precioUnitarioLine->text().toInt()
                             );

        admin.insertar(equipo);
    }
}

void MainWindow::clear()
{

                         ui->otro1->clear();
                                   ui->otro4->clear();
                                   ui->provedorLine->clear();
                                   ui->numeroLine->clear();
                                   ui->precioUnitarioLine->clear();
}


void MainWindow::on_pushButton_3_clicked()
{
    QString a,b;
    a+="Electronico "+b.setNum(admin.getMalEstadoElectronico())+"\n";
    a+="Mobiliario "+b.setNum(admin.getMalEstadoMobiliario())+"\n";
    ui->malEstadoTipo->setText(a);
}


void MainWindow::on_pushButton_4_clicked()
{
    QString a;
    a+="Mayor garantia"+admin.getEquipo(admin.mayorGarantia())->getTipoEquipo()+" "+admin.getEquipo(admin.mayorGarantia())->getN0()+"\n";
    a+="Menor garantia"+admin.getEquipo(admin.menorGarantia())->getTipoEquipo()+" "+admin.getEquipo(admin.menorGarantia())->getN0();
    ui->mayorMenorGarantia->setText(a);

}


void MainWindow::on_pushButton_5_clicked()
{
    ui->mayorProveedor->setText(admin.mayorProveedor());
}


void MainWindow::on_pushButton_7_clicked()
{
    QString b;
    ui->costoTotal->setText(b.setNum(admin.costoTotal()));
}



void MainWindow::on_pushButton_8_clicked()
{
    QString b;
    ui->costoPromedio->setText(b.setNum(admin.costoPromedio()));
}


void MainWindow::on_pushButton_9_clicked()
{
    string x;
    QString b;
    QString a="";
    for(int i=0;i<5;i++){
        a+=tipoMuebles[i]+" "+b.setNum(admin.equiposDeUnMismoTipo(tipoMuebles[i]))+"\n";

    }
    ofstream MyFile;
    MyFile.open("datos.dat");
    MyFile<<a.toStdString();
    MyFile.close();
    ui->tiposMobiliario->setText(a);
}

