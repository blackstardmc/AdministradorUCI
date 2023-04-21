#include "equipo.h"



QString Equipo::getEstado() const
{
    return estado;
}

void Equipo::setEstado(const QString &newEstado)
{
    estado = newEstado;
}

QString Equipo::getProveedor() const
{
    return proveedor;
}

void Equipo::setProveedor(const QString &newProveedor)
{
    proveedor = newProveedor;
}

QString Equipo::getN0() const
{
    return n0;
}

void Equipo::setN0(const QString &newN0)
{
    n0 = newN0;
}

bool Equipo::getTipo() const
{
    return mobiliarioOElectronico;
}

void Equipo::setTipo(bool newTipo)
{
    mobiliarioOElectronico = newTipo;
}

int Equipo::getPrecioU() const
{
    return precioU;
}

void Equipo::setPrecioU(int newPrecioU)
{
    precioU = newPrecioU;
}

QString Equipo::getTipoEquipo() const
{
    return tipoEquipo;
}

void Equipo::setTipoEquipo(const QString &newTipoEquipo)
{
    tipoEquipo = newTipoEquipo;
}

Equipo::Equipo(const QString &estado, const QString &proveedor, const QString &n0, const QString &tipoEquipo, int precioU) : estado(estado),
    proveedor(proveedor),
    n0(n0),
    tipoEquipo(tipoEquipo),
    precioU(precioU)
{}
