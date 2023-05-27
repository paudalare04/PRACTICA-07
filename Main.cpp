#include <iostream>
#include "Heroe.h"
#include "Enemigo.h"
#include "EnemigoFinal.h"
#include <windows.h>
#include <conio.h>
using namespace std;
//LIBRERIAS PARA EL CORRECTO FUNCIONAMIENTO




/**/void setColor(int color)

{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, color);
}

void finalJuego() {


}

void mostrarTitulo()

{

    cout << string(30, ' ') << "" << "\n" << endl;

    cout << string(30, ' ') << "" << "\n" << endl;

    cout << string(30, ' ') << "" << "\n" << endl;

    cout << string(30, ' ') << "" << "\n" << endl;

    setColor(2);

    cout << string(50, ' ') << R"(


                ##                                                             ##
                ##      ####                ###   ##  ##   #####     ### ##    ##      ####
                ##         ##                ##   ##  ##   ##  ##   ##  ##     ##         ##
                ##      #####                ##   ##  ##   ##  ##   ##  ##     ##      #####
                ##     ##  ##            ##  ##   ##  ##   ##  ##    #####     ##     ##  ##
                ####    #####            ##  ##    ######  ##  ##       ##    ####     #####
                                           ####                      ##### )" << endl;


    cout << string(30, ' ') << "" << "\n" << endl;

    cout << string(30, ' ') << "" << "\n" << endl;

    cout << string(50, ' ') << "Cargando..." << "\n" << endl;

    Sleep(4000);

    setColor(7);

}


void mostrarMenu()
{

    system("cls");

    cout << string(30, ' ') << "" << "\n" << endl;

    cout << string(30, ' ') << "" << "\n" << endl;

    cout << string(30, ' ') << "==================== MENU ====================" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "1. Empezar el juego" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "2. Mostrar caracteristicas de los personajes" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "3. Mostrar creditos del juego" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "4. Salir del juego" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "===============================================" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "Elije una opcion invocador: " << endl << endl;

    Sleep(300);

}

void mostrarCreditos()

{
    system("cls"); //Para poder borrar todo el codigo que haya aparecido anteriormente a esta herramienta

    // Imprimir los créditos

    cout << string(40, ' ') << "" << "\n" << endl; //Es una forma para poder poner el texto en el medio en el proceso de depuración del código, donde se printan 30 strings vacíos

    cout << string(40, ' ') << "" << "\n" << endl;

    cout << string(40, ' ') << "==============================" << "\n" << endl;

    cout << string(50, ' ') << "CREDITOS" << "\n" << endl;

    cout << string(40, ' ') << "==============================" << "\n" << endl;

    cout << string(40, ' ') << "PROGRAMADOR: Pau Dalmau" << "\n" << endl;

    Sleep(300);

    cout << string(40, ' ') << "NARRACION: Pau Dalmau" << "\n" << endl;

    Sleep(300);

    Sleep(300);

    cout << "\n" << endl;

    // Esperar a que el usuario presione una tecla para salir

    cout << string(40, ' ') << "Presiona cualquier tecla para salir...";

    _getch(); // Esperar a la entrada del usuario

}

void mostrarAtributos()
{

    system("cls");

    cout << string(30, ' ') << "" << "\n" << endl;

    cout << string(30, ' ') << "========= CARACTERISTICAS DE LOS PERSONAJES =========" << "\n" << endl;

    Sleep(300);

    setColor(12); //COLOR ROJO

    cout << string(30, ' ') << "YASUO:" << "\n" << endl;

    setColor(7); // PONER EL COLOR COMO ESTAVA

    Sleep(300);

    cout << string(30, ' ') << "  - Vida: 100" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "  - Danyo: 35" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "  - Defensa: 10" << "\n" << endl;

    Sleep(300);

    setColor(2); // color verde 

    cout << string(30, ' ') << "RAMMUS:" << "\n" << endl;

    setColor(7); // PONER EL COLOR COMO ESTAVA

    Sleep(300);

    cout << string(30, ' ') << "  - Vida: 75" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "  - Danyo: 35" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "  - Defensa: 5" << "\n" << endl;

    Sleep(300);

    setColor(9); //COLOR AZUL

    cout << string(30, ' ') << "BARON NASHOR:" << "\n" << endl;

    setColor(7); // PONER EL COLOR COMO ESTAVA

    Sleep(300);

    cout << string(30, ' ') << "  - Vida: 100" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "  - Danyo: 70" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "  - Defensa: 10" << "\n" << endl;

    Sleep(300);

    cout << string(30, ' ') << "===============================================" << "\n" << endl;

    Sleep(2000);

}

void comenzarJuego()
{

    void comenzarJuego();
    {

        cout << string(30, ' ') << "El juego ha comenzado!" << "\n" << endl;

        system("cls");

        cout << string(30, ' ') << "===============================================" << "\n" << endl;

        Sleep(500);

        Heroe heroe("Yasuo", 100, 35, 10);

        heroe.imprimir();

        Sleep(500);

        cout << string(30, ' ') << "===============================================" << "\n" << endl;

        Sleep(500);

        Enemigo enemigo("Rammus", 60, 35, 5);

        enemigo.imprimir();

        Sleep(500);

        cout << string(30, ' ') << "===============================================" << "\n" << endl;

        Sleep(500);

        EnemigoFinal enemigoFinal("Baron nashor", 50, 35, 5); //MULTIPLICADOS POR 10 ECHO EN EL MOMENTO DE LA HERENCIA EN EL ARCHIVO ENEMIGO FINAL.CPP

        enemigoFinal.imprimir();

        Sleep(500);

        cout << string(30, ' ') << "===============================================" << "\n" << endl;

        Sleep(500);

        system("cls");

        cout << string(30, ' ') << "" << "\n" << endl;

        cout << string(30, ' ') << "-Yasuo se adentra a la Grieta del invocator y se topa con Rammus en la jungla" << "\n" << endl;

        Sleep(1000);

        system("cls");

        cout << string(30, ' ') << "" << "\n" << endl;

        Sleep(500);

        // Ciclo de batalla hasta que uno de los dos tenga vida <= 0

        while (heroe.getVida() > 0 && enemigo.getVida() > 0) {

            // Turno del héroe

            heroe.atacar(enemigo);

            // Turno del enemigo

            enemigo.atacar(heroe);

            // Imprimir resultados de los turnos del heroe y el enemigo

            cout << string(30, ' ') << "" << "\n" << endl;

            cout << string(30, ' ') << "" << "\n" << endl;

            cout << string(30, ' ') << "===============================================" << "\n" << endl;

            Sleep(500);

            setColor(12); //color rojo

            cout << string(30, ' ') << "-Turno de yasuo:" << "\n" << endl;

            Sleep(500);

            cout << string(30, ' ') << "-Yasuo ataca a Rammus." << "\n" << endl;

            Sleep(500);

            setColor(7); // PONER EL COLOR COMO ESTAVA

            cout << string(30, ' ') << "===============================================" << "\n" << endl;

            Sleep(500);

            setColor(2); // color verde

            cout << string(30, ' ') << "-Rammus recibe un duro golpe y se queda con una vida total de " << enemigo.getVida() << " puntos de vida" << endl;

            Sleep(500);

            cout << endl;

            cout << string(30, ' ') << "-Es el turno de Rammus, veremos lo que puede hacer, pinta mal:" << "\n" << endl;

            Sleep(500);

            cout << string(30, ' ') << "-Rammus lanza un ataque torbellino hacia yasuo." << "\n" << endl;

            setColor(7); // PONER EL COLOR COMO ESTAVA

            cout << string(30, ' ') << "===============================================" << "\n" << endl;

            Sleep(500);

            Sleep(500);

            setColor(12); //color rojo

            cout << string(30, ' ') << "-Despues de este duro golpe, yasuo se queda a una vida de " << heroe.getVida() << " puntos de vida" << "\n" << endl;

            setColor(7); // PONER EL COLOR COMO ESTAVA

            cout << string(30, ' ') << "===============================================" << "\n" << endl;

            Sleep(600);

            system("cls");

        }

        // Finalizar la batalla si una de las condiciones se cumplen

        cout << string(30, ' ') << "" << "\n" << endl;

        cout << string(30, ' ') << "-Batalla finalizada!" << "\n" << endl;

        Sleep(500);

        if (heroe.getVida() == 0) { //Si yasuo se queda a 0 de vida se termina el juego

            setColor(12); //color rojo

            cout << string(30, ' ') << "-Yasuo a sido eliminado. Aniquilados ¡Rammus gana!" << "\n" << endl;

            setColor(7); // PONER EL COLOR COMO ESTAVA

            Sleep(500);

            cout << string(30, ' ') << "Volviendo al menu principal...." << "\n" << endl;

            Sleep(3000);

        }


        else { //Si rammus se queda con 0 de vida se termina el juego

            setColor(2); // color verde

            cout << string(30, ' ') << "-Rammus a sido eliminado. SHUTDOWN! Yasuo gana!" << "\n" << endl;

            setColor(7); // PONER EL COLOR COMO ESTAVA

            Sleep(3000);

            system("cls");

        }

        // Level Upç

        setColor(14);

        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(20, ' ') << "   ###                                 ###                                  ##\n";
        cout << string(20, ' ') << "    ##                                  ##                                 ####\n";
        cout << string(20, ' ') << "    ##      ####    ##  ##    ####      ##              ##  ##   ######    ####\n";
        cout << string(20, ' ') << "    ##     ##  ##   ##  ##   ##  ##     ##              ##  ##    ##  ##    ##\n";
        cout << string(20, ' ') << "    ##     ######   ##  ##   ######     ##              ##  ##    ##  ##    ##\n";
        cout << string(20, ' ') << "    ##     ##        ####    ##         ##              ##  ##    ###       ##\n";
        cout << string(20, ' ') << "   ####     #####     ##      #####    ####              ######   ###\n";
        cout << string(20, ' ') << "                                                                           ####\n";

        setColor(7);

        Sleep(3000);

        system("cls");

        //Se multiplican los stats del heroe x3 despues del combate en el caso de que gane el heroe.

        int vidaNueva = heroe.getVida() * 3;
        heroe.setVida(vidaNueva);
        int ataqueNuevo = heroe.getAtaque() * 3;
        heroe.setAtaque(ataqueNuevo);
        int nuevaDefensa = heroe.getDefensa() * 3;
        heroe.setDefensa(nuevaDefensa);

        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(30, ' ') << "Estadisticas nuevas del heroe!\n";
        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(30, ' ') << "Vida: " << heroe.getVida() << "\n";
        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(30, ' ') << "Ataque: " << heroe.getAtaque() << "\n";
        cout << string(30, ' ') << "" << "\n" << endl;
        cout << string(30, ' ') << "Defensa: " << heroe.getDefensa() << "\n";
        cout << string(30, ' ') << "" << "\n" << endl;

        Sleep(3000);
        system("cls");
        
    }


}

int main()

{

    char opcion;

    bool salir = false;


    mostrarTitulo();

    while (!salir)

    {
        mostrarMenu();

        opcion = _getch();

        switch (opcion)

        {

        case '1':

            comenzarJuego();

            break;

        case '2':

            mostrarAtributos();

            break;

        case '3':

            mostrarCreditos();

            break;

        case '4':

            cout << string(30, ' ') << "Estas seguro de que quieres salir? (S/N): " << "\n";

            Sleep(300);

            opcion = _getch();

            cout << endl;

            if (opcion == 'S' || opcion == 's')

            {
                salir = true;

                cout << string(30, ' ') << "Guardando partida......." << "\n" << endl;

                Sleep(2000);

                cout << string(30, ' ') << "Saliendo del juego..." << endl;

                Sleep(2000);
            }

            break;

        default:

            cout << string(30, ' ') << "Opcion invalida. Por favor, elija una opcion valida." << endl;

            Sleep(300);

            break;
        }

        cout << endl;
    }
}