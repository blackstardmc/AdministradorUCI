#ifndef EQUIPO_H
#define EQUIPO_H

#include <QString>



class Equipo
{
public:
    Equipo(const QString &estado, const QString &proveedor, const QString &n0, const QString &tipoEquipo, int precioU);


    QString getEstado() const;
    void setEstado(const QString &newEstado);
    QString getProveedor() const;
    void setProveedor(const QString &newProveedor);
    QString getN0() const;
    void setN0(const QString &newN0);
    bool getTipo() const;
    void setTipo(bool newTipo);
    int getPrecioU() const;
    virtual  float getCoste()=0;
    void setPrecioU(int newPrecioU);

    QString getTipoEquipo() const;
    void setTipoEquipo(const QString &newTipoEquipo);

private:
    QString estado,proveedor,n0;
    bool mobiliarioOElectronico;
    QString tipoEquipo;

    int precioU;
};

#endif // EQUIPO_H
