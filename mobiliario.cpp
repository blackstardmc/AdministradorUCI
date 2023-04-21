#include "mobiliario.h"


int Mobiliario::getTiempoVida() const
{
    return tiempoVida;
}

void Mobiliario::setTiempoVida(int newTiempoVida)
{
    tiempoVida = newTiempoVida;
}

QString Mobiliario::getLocal() const
{
    return local;
}

void Mobiliario::setLocal(const QString &newLocal)
{
    local = newLocal;
}

float Mobiliario::getCoste()
{
    int plus=0;
    if(local=="Aula"){
        plus=20;
    }

    else if(local=="Laboratorio"){
        plus=30;
    }

    else if(local=="Apartamento"){
        plus=40;
    }

    else if(local=="Oficina"){
        plus=50;
    }
    return plus+(getPrecioU()*tiempoVida);
}

Mobiliario::Mobiliario(int tiempoVida, const QString &local, const QString &estado, const QString &proveedor, const QString &n0, const QString &tipoEquipo, int precioU) : Equipo(estado, proveedor, n0, tipoEquipo, precioU),
    tiempoVida(tiempoVida),
    local(local)
{setTipo(false);}
