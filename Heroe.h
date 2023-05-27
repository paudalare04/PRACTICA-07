#include <string>
#include "Enemigo.h"
using namespace std;

class Enemigo; // Declaración adelantada de la clase Enemigo

class Heroe {

private:

    std::string nombre;

    int vida;

    int ataque;

    int defensa;

public:

    //CONSTRUCTOR

    Heroe(const string& nombre, int vida, int ataque, int defensa);


    //GETTERS

    string getNombre() const;

    int getVida() const;

    int getAtaque() const;

    int getDefensa() const;

    void setDefensa(int defensa);


    //SETTERS

    void setNombre(const string& nombre);

    void setVida(int vida);

    void setAtaque(int ataque);


    //METODOS PROPIOS

    void imprimir() const;

    void atacar(Enemigo& enemigo);


};




