//
// Created by guero on 20/09/2025.
//

#ifndef CLASE_20_SEP_PILA_ESTATICA_H
#define CLASE_20_SEP_PILA_ESTATICA_H

#include "lista_estatica.h"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// Stack
template<typename T, size_t MAX_SIZE>
class PilaEstatica {
private:
    ListaEstatica<T, MAX_SIZE> lista;

public:
    PilaEstatica() = default;

    // ---- NUEVOS: forwarders ----
    bool vacia() const { return lista.vacia(); }
    bool llena() const { return lista.llena(); }
    size_t size() const { return lista.getContador(); }

    void apilar(const T& valor) {
        if (lista.llena()) {
            cout << "Pila llena\n";
            return;
        }
        lista.agregar_final(valor);
    }

    void desapilar() {
        if (lista.vacia()) {
            cout << "Pila vacia\n";
            return;
        }
        lista.eliminar_final();
    }

    T& tope() {
        if (lista.vacia()) {
            throw underflow_error("Pila vacia");
        }
        return lista[lista.getContador() - 1];
    }

    const T& tope() const {
        if (lista.vacia()) {
            throw underflow_error("Pila vacia");
        }
        return lista[lista.getContador() - 1];
    }
};

#endif // CLASE_20_SEP_PILA_ESTATICA_H

