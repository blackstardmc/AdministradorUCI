#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include "Electronico.h"
#include "equipo.h"



class Administrador
{
private:
    Equipo **equipos;
    int contador=0;
public:
    Administrador();
    ~Administrador();
    int getMalEstadoElectronico();
    int getMalEstadoMobiliario();
    int mayorGarantia();
    int menorGarantia();
    void insertar(Equipo*);
    Equipo* getEquipo(int);
    int equiposDeUnMismoTipo(QString);
    int equiposDadaUnaMarcaTipo(QString,QString);
    QString mayorProveedor();
    int contadorProveedor(QString);
    float costoTotal();
    float costoPromedio();
};

#endif // ADMINISTRADOR_H
