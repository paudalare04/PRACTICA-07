#include "Enemigofinal.h"
#include <iostream>
using namespace std;

class heroe;//DECLARO LA CLASE DEL HEROE PARA PODER USARLA DESPUÉS EN EL METODO DE ATACAR AL HEROE


EnemigoFinal::EnemigoFinal(const string& nombre, int vida, int ataque, int defensa)


    :Enemigo(nombre, vida* MULTIPLICADOR_ATRIBUTOS, ataque* MULTIPLICADOR_ATRIBUTOS, defensa* MULTIPLICADOR_ATRIBUTOS) {}


void EnemigoFinal::imprimir() const {

    cout << string(30, ' ') << "Nombre: " << getNombre() << "\n" << endl;

    cout << string(30, ' ') << "Vida: " << getVida() << "\n" << endl;

    cout << string(30, ' ') << "Ataque: " << getAtaque() << "\n" << endl;

    cout << string(30, ' ') << "Defensa: " << getDefensa() << "\n" << endl;

}



