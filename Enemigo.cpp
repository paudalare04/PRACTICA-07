#include "Enemigo.h"
#include <iostream>
#include <random>
#include "Heroe.h"

class heroe;

Enemigo::Enemigo(const std::string& nombre, int vida, int ataque, int defensa)

    : nombre(nombre), vida(vida), ataque(ataque), defensa(defensa) {}

string Enemigo::getNombre() const {

    return nombre;
}

void Enemigo::setNombre(const std::string& nombre) {  /* el this es para llamar a la variable predefinida en este caso los atributos del objeto enemigo*
                                                         para no tener que asignarle un nombre diferente y me pueda confundir*/

    this->nombre = nombre;
}

int Enemigo::getVida() const {

    return vida;
}

void Enemigo::setVida(int vida) {

    this->vida = vida;
}

int Enemigo::getAtaque() const {

    return ataque;
}

void Enemigo::setAtaque(int ataque) {

    this->ataque = ataque;
}

int Enemigo::getDefensa() const {

    return defensa;
}

void Enemigo::setDefensa(int defensa) {

    this->defensa = defensa;
}

void Enemigo::imprimir() const {

    std::cout << std::string(30, ' ') << "Nombre: " << nombre << "\n" << std::endl;

    std::cout << std::string(30, ' ') << "Vida: " << vida << "\n" << std::endl;

    std::cout << std::string(30, ' ') << "Ataque: " << ataque << "\n" << std::endl;

    std::cout << std::string(30, ' ') << "Defensa: " << defensa << "\n" << std::endl;
}

void Enemigo::atacar(Heroe& heroe) {

    random_device rd;

    mt19937 gen(rd());

    uniform_int_distribution<> dist(20, 35);

    int ataqueEnemigo;

    int vidaHeroe = heroe.getVida();

    do {
        ataqueEnemigo = dist(gen);

        if (ataqueEnemigo < heroe.getDefensa()) {
            ataqueEnemigo = 0;
        }
        else {
            ataqueEnemigo -= heroe.getDefensa();
        }

        vidaHeroe -= ataqueEnemigo;
    } while (ataqueEnemigo == 0);

    heroe.setVida(vidaHeroe);
}


