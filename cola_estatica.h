//
// Created by guero on 20/09/2025.
//

#ifndef CLASE_20_SEP_COLA_ESTATICA_H
#define CLASE_20_SEP_COLA_ESTATICA_H

#include "lista_estatica.h"
#include <iostream>
#include <stdexcept>
using namespace std;

// Cola = Queue
template<typename T, size_t MAX_SIZE>
class ColaEstatica {
private:
    ListaEstatica<T, MAX_SIZE> lista;

public:
    ColaEstatica() = default;

    // Enqueue
    void encolar(const T& valor) {
        if (lista.llena()) {
            cout << "Cola llena" << endl;
            return;
        }
        lista.agregar_final(valor);
    }

    // Dequeue
    void desencolar() {
        if (lista.vacia()) {
            cout << "Cola vacia" << endl;
            return;
        }
        lista.eliminar_inicio();
    }

    // Front
    T& inicio() {
        if (lista.vacia()) {
            throw underflow_error("Cola vacia");
        }
        return lista[0];
    }
    const T& inicio() const {
        if (lista.vacia()) {
            throw underflow_error("Cola vacia");
        }
        return lista[0];
    }

    bool vacia() const { return lista.vacia(); }
    bool llena() const { return lista.llena(); }
};

#endif // CLASE_20_SEP_COLA_ESTATICA_H

