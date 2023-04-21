#ifndef ELECTRONICO_H
#define ELECTRONICO_H

#include "equipo.h"

class Electronico : public Equipo
{
private:
    QString marca,otrosP;
    int garantia;
public:
    Electronico(const QString &marca, const QString &otrosP, int garantia, const QString &estado, const QString &proveedor, const QString &n0, const QString &tipoEquipo, int precioU);

     QString getMarca() const;
    void setMarca(const QString &newMarca);
    QString getOtrosP() const;
    void setOtrosP(const QString &newOtrosP);
    int getGarantia() const;
    void setGarantia(int newGarantia);

    float getCoste();
};

#endif // ELECTRONICO_H
