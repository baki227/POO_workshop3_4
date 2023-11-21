#include "exo.h"

#include <iostream>
// classe objet2D


objet2D::objet2D() : dim1(0), dim2(0) {}

objet2D::objet2D(int tdim1, int tdim2) : dim1(tdim1), dim2(tdim2) {}


int objet2D::getAire() {
    return dim1 * dim2;
}

int objet2D::getPerimetre() {
    return 2 * (dim1 + dim2);
}

string objet2D::afficheInfo() {
    return "je suis un Objet 2D";
}

//  classe rectangle

rectangle::rectangle() : objet2D() {}

rectangle::rectangle(int tdim1, int tdim2) : objet2D(tdim1, tdim2) {}

int rectangle::getAire() {
    return dim1 * dim2;
}

int rectangle::getPerimetre() {
    return 2 * (dim1 + dim2);
}

string rectangle::afficheInfo() {
    return "je suis un rectangle";
}

//  classe cube

cube::cube() : rectangle() {}

cube::cube(int tcote) : rectangle(tcote, tcote) {}

int cube::getAire() {
    return 6 * dim1 * dim1; 
}

int cube::getCote() {
    return dim1;
}

int cube::getPerimetre() {
    return dim1 * dim1; 
}

string cube::afficheInfo() {
    return "je suis un cube";
}


