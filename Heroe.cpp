#include "Heroe.h"
#include <iostream>
#include <cstdlib> // Se agrega la biblioteca para usar la función rand()
#include <random>
using namespace std;


Heroe::Heroe(const string& nombre, int vida, int ataque, int defensa)

    : nombre(nombre), vida(vida), ataque(ataque), defensa(defensa) {}

string Heroe::getNombre() const {

    return nombre;
}

void Heroe::setNombre(const string& nombre) {

    this->nombre = nombre;
}

int Heroe::getVida() const {

    return vida;
}

void Heroe::setVida(int vida) {

    this->vida = vida;
}

int Heroe::getAtaque() const {

    return ataque;
}

void Heroe::setAtaque(int ataque) {

    this->ataque = ataque;
}

int Heroe::getDefensa() const {

    return defensa;
}

void Heroe::setDefensa(int defensa) {

    this->defensa = defensa;
}

void Heroe::imprimir() const {

    cout << string(30, ' ') << "Nombre: " << nombre << "\n" << endl;

    cout << string(30, ' ') << "Vida: " << vida << "\n" << endl;

    cout << string(30, ' ') << "Ataque: " << ataque << "\n" << endl;

    cout << string(30, ' ') << "Defensa: " << defensa << "\n" << endl;
}

void Heroe::atacar(Enemigo& enemigo) {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(10, 35);

    int ataqueHeroe;
    int vidaEnemigo = enemigo.getVida();

    do {
        ataqueHeroe = dist(gen);

        if (ataqueHeroe < enemigo.getDefensa()) {
            ataqueHeroe = 0;
        }
        else {
            ataqueHeroe -= enemigo.getDefensa();
        }

        vidaEnemigo -= ataqueHeroe;
    } while (ataqueHeroe == 0);

    enemigo.setVida(vidaEnemigo);
}