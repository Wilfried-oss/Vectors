#ifndef TABLEAU_H_INCLUDED
#define TABLEAU_H_INCLUDED

#include <iostream>

// Définition de la classe 

class Tableau
{
    public:
    int* elements;
    int taille;

    public:
    Tableau();
    Tableau(int);
    ~Tableau();

    void afficherDonne();
    void altererDonne(int position, int elmt);
    void triTableau();
    int sommeTableau();
    int plusPetitElement();
    int plusGrandElement();

};
#endif