#include "Enemigo.h"
#include <string>
using namespace std;


class EnemigoFinal : public Enemigo {

public:

    EnemigoFinal(const string& nombre, int vida, int ataque, int defensa);

    void imprimir()const;

private:

    static constexpr int MULTIPLICADOR_ATRIBUTOS = 2;  /*Esto es una variable privada del objeto enemigoFinal.
                                                          Seria lo mismo que en java cuando usamos un static int.
                                                          La finalidad de esta variable es que al heredar los parametros del objeto
                                                          enemigo se multipliquen por 10 para augmentar la dificultad */
    
    
 //METODOS DEL ENEMIGO FINAL


    void atacar(Heroe& heroe);


};


