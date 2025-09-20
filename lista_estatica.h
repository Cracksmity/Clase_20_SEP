#ifndef LISTA_ESTATICA_H_INCLUDED
#define LISTA_ESTATICA_H_INCLUDED

#include <cstddef>
#include <iostream>
using namespace std;

template<typename T, size_t MAX_SIZE>
class ListaEstatica {
private:
    T arreglo[MAX_SIZE];
    size_t contador;

public:
    ListaEstatica() : contador(0) {}

    void agregar_final(const T& valor) {
        if (contador == MAX_SIZE) return;
        arreglo[contador++] = valor;
    }

    void agregar_inicio(const T& valor) {
        if (contador == MAX_SIZE) return;
        for (size_t i = contador; i > 0; --i) {
            arreglo[i] = arreglo[i - 1];
        }
        arreglo[0] = valor;
        ++contador;
    }

    void agregar(const T& valor, size_t pos) {
        if (contador == MAX_SIZE) return;
        if (pos > contador) { // permitir insertar al final con pos == contador
            cout << "Posicion invalida\n";
            return;
        }
        for (size_t i = contador; i > pos; --i) {
            arreglo[i] = arreglo[i - 1];
        }
        arreglo[pos] = valor;
        ++contador;
    }

    void eliminar_final() {
        if (contador == 0) return;
        --contador;
    }

    void eliminar_inicio() {
        if (contador == 0) return;
        for (size_t i = 0; i + 1 < contador; ++i) {
            arreglo[i] = arreglo[i + 1];
        }
        --contador;
    }

    void eliminar(size_t pos) {
        if (contador == 0) return;
        if (pos >= contador) {
            cout << "Posicion invalida\n";
            return;
        }
        for (size_t i = pos; i + 1 < contador; ++i) {
            arreglo[i] = arreglo[i + 1];
        }
        --contador;
    }

    void mostrar() const {
        cout << "[";
        for (size_t i = 0; i < contador; ++i) {
            cout << arreglo[i];
            if (i + 1 < contador) cout << ", ";
        }
        cout << "]\n";
    }

    bool vacia() const { return contador == 0; }
    bool llena() const { return contador == MAX_SIZE; }
    size_t getContador() const { return contador; }

    // operator[]
    T& operator[](size_t posicion) { return arreglo[posicion]; }
    const T& operator[](size_t posicion) const { return arreglo[posicion]; }
};

#endif // LISTA_ESTATICA_H_INCLUDED

