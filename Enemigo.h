#ifndef ENEMIGO_H
#define ENEMIGO_H
using namespace std;

#include <string>

class Heroe; //DECLARO LA CLASE DEL HEROE YA CREADA PARA USARLA DESPUÉS PARA LLAMARLA EN EL METODO DE ATACAR HEROE.

class Enemigo {

private:

    string nombre;

    int vida;

    int ataque;

    int defensa;

public:

    //CONSTRUCTOR

    Enemigo(const string& nombre, int vida, int ataque, int defensa);

    //GETTERS

    int getVida() const;

    int getAtaque() const;

    int getDefensa() const;


    //SETTERS

    string getNombre() const;

    void setNombre(const string& nombre);

    void setVida(int vida);

    void setAtaque(int ataque);

    void setDefensa(int defensa);


    //METODOS PROPIOS

    void imprimir() const;

    void atacar(Heroe& heroe);

};

#endif
