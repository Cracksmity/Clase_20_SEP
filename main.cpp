#include <iostream>
#include "lista_estatica.h"

using namespace std;

int main() {
    ListaEstatica<string, 10> lista;
    lista.agregar_final("CUCEI");
    lista.agregar_final("CUCEA");
    lista.agregar_final("CUCS");
    lista.mostrar();

    ListaEstatica<int, 5> listaEnteros;
    listaEnteros.agregar_final(1);
    listaEnteros.agregar_final(5);
    listaEnteros.agregar_final(10);
    listaEnteros.mostrar();

    return 0;
    }


