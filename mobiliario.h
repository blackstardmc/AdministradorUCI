#ifndef MOBILIARIO_H
#define MOBILIARIO_H

#include "equipo.h"

class Mobiliario : public Equipo
{
private:
    int tiempoVida;
    QString local;
public:
    Mobiliario(int tiempoVida, const QString &local, const QString &estado, const QString &proveedor, const QString &n0, const QString &tipoEquipo, int precioU);

    int getTiempoVida() const;
    void setTiempoVida(int newTiempoVida);
    QString getLocal() const;
    void setLocal(const QString &newLocal);

    // Equipo interface
public:
    float getCoste();
};

#endif // MOBILIARIO_H
