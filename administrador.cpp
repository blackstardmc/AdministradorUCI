#include "administrador.h"

Administrador::Administrador()
{

    this->equipos=new Equipo*[100];
}

Administrador::~Administrador()
{
    delete equipos;
}

int Administrador::getMalEstadoElectronico()
{
    int cont=0;
    for(int i=0;i<contador;i++){
        if(equipos[i]->getTipo() && equipos[i]->getEstado()=="Mal"){
            cont++;
        }
    }
    return cont;
}

int Administrador::getMalEstadoMobiliario()
{

    int cont=0;
    for(int i=0;i<contador;i++){
        if(!equipos[i]->getTipo() && equipos[i]->getEstado()=="Mal"){
            cont++;
        }
    }
    return cont;
}

int Administrador::mayorGarantia()
{
    int pos=0;
    int mayor=((Electronico*)equipos[0])->getGarantia();
    for(int i=0;i<contador;i++){
        if(equipos[i]->getTipo()){
                if(mayor<((Electronico*)equipos[i])->getGarantia()){
            pos=i;
            mayor=((Electronico*)equipos[i])->getGarantia();
        }}
    }
    return pos;
}

int Administrador::menorGarantia()
{
    int pos=0;
    int menor=((Electronico*)equipos[0])->getGarantia();
    for(int i=0;i<contador;i++){
        if(equipos[i]->getTipo()){
        if(menor>((Electronico*)equipos[i])->getGarantia()){
            pos=i;
            menor=((Electronico*)equipos[i])->getGarantia();
        }}
    }
    return pos;

}

void Administrador::insertar(Equipo * e)
{
 equipos[contador]=e;
 contador++;
}

Equipo *Administrador::getEquipo(int i)
{
return equipos[i];
}

int Administrador::equiposDeUnMismoTipo(QString t)
{
    int c=0;
    for(int i=0;i<contador;i++){
        if(equipos[i]->getTipoEquipo()==t){
            c++;
        }
    }
    return c;
}

int Administrador::equiposDadaUnaMarcaTipo(QString t, QString m)
{
    int c=0;
    for(int i=0;i<contador;i++){
        if(equipos[i]->getTipoEquipo()==t){
            if(((Electronico*)equipos[i])->getMarca()==m){
                c++;
            }
        }
    }
    return c;

}

QString Administrador::mayorProveedor()
{
int mayor=0;
QString p="";

for(int i=0;i<contador;i++){
    if(contadorProveedor(equipos[i]->getProveedor())>mayor){
        mayor=contadorProveedor(equipos[i]->getProveedor());
        p=equipos[i]->getProveedor();
    }
}
    return p;
}





int Administrador::contadorProveedor(QString p)
{
    int c=0;

    for(int i=0;i<contador;i++){
        if(equipos[i]->getProveedor()==p){
            c++;
        }

    }
    return c;
}

float Administrador::costoTotal()
{
    float sum=0;
    for (int i = 0; i < contador; i++) {
        sum+=equipos[i]->getCoste();

    }
    return sum;
}

float Administrador::costoPromedio()
{
    return costoTotal()/contador;
}
