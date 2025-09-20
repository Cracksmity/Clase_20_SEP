//
// Created by guero on 20/09/2025.
//

#ifndef CLASE_20_SEP_LIBRO_H
#define CLASE_20_SEP_LIBRO_H

#include <iostream>
#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    int numeroPaginas;

public:
    // Constructor por defecto
    Libro() : titulo(), autor(), numeroPaginas(0) {}

    // Constructor con parámetros
    Libro(const std::string& titulo, const std::string& autor, int numeroPaginas)
            : titulo(titulo), autor(autor), numeroPaginas(numeroPaginas) {}

    // Operador de salida
    friend std::ostream& operator<<(std::ostream& out, const Libro& libro) {
        out << "Libro(titulo=" << libro.titulo << ", "
            << "autor=" << libro.autor << ", "
            << "numero de paginas=" << libro.numeroPaginas
            << ")";
        return out;
    }
};

#endif // CLASE_20_SEP_LIBRO_H

