#include "electronico.h"



QString Electronico::getMarca() const
{
    return marca;
}

void Electronico::setMarca(const QString &newMarca)
{
    marca = newMarca;
}

QString Electronico::getOtrosP() const
{
    return otrosP;
}

void Electronico::setOtrosP(const QString &newOtrosP)
{
    otrosP = newOtrosP;
}

int Electronico::getGarantia() const
{
    return garantia;
}

void Electronico::setGarantia(int newGarantia)
{
    garantia = newGarantia;
}

float Electronico::getCoste()
{
    return getPrecioU()*garantia;
}



Electronico::Electronico(const QString &marca, const QString &otrosP, int garantia, const QString &estado, const QString &proveedor, const QString &n0, const QString &tipoEquipo, int precioU) : Equipo(estado, proveedor, n0, tipoEquipo, precioU),
    marca(marca),
    otrosP(otrosP),
    garantia(garantia)
{this->setTipo(true);}
