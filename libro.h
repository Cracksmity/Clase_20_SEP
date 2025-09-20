//
// Created by guero on 20/09/2025.
//

#ifndef CLASE_20_SEP_LIBRO_H
#define CLASE_20_SEP_LIBRO_H

#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int numeroPaginas;

public:
    // Constructor por defecto
    Libro() : titulo(), autor(), numeroPaginas(0) {}

    // Constructor con parámetros
    Libro(const string& titulo, const string& autor, int numeroPaginas)
            : titulo(titulo), autor(autor), numeroPaginas(numeroPaginas) {}

    // Operador de salida
    friend ostream& operator<<(ostream& out, const Libro& libro) {
        out << "Libro(titulo=" << libro.titulo << ", "
            << "autor=" << libro.autor << ", "
            << "numero de paginas=" << libro.numeroPaginas
            << ")\n";
        return out;
    }
};

#endif // CLASE_20_SEP_LIBRO_H

