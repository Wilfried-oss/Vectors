#include "Tableau.h"
#include <iostream>
using namespace std;

//Liste de parametres pour le contructeur par défaut
Tableau::Tableau(): taille(0), elements(NULL){}; 

//Liste de parametres pour le contructeur
Tableau::Tableau(int t): taille(t), elements(new int[taille]){}; 

// Le destructeur
Tableau::~Tableau()  
{
    delete [] elements;
}

void Tableau::afficherDonne()
{
    cout << endl;
    cout << "\t Voici votre tableau : ";
    cout << " [ ";
    for (int i = 0; i < taille; i++)
    {
        cout << elements[i] << "  ";
    }
    cout << "]";
    cout << endl;
}


void Tableau::altererDonne(int position, int elmt)
{
    elements[position] = elmt;
}


void Tableau::triTableau()
{
    int i, j, tp;
    for(i = 0 ;  i < taille ; i++)
    {
        for(j = 0; j < taille ; j++)
        {
            if(elements[j] > elements[j+1])
            {
                tp = elements[j];
                elements[j] = elements[j+1];
                elements[j+1] = tp;
            }
        }
    }
}


int Tableau::sommeTableau()
{
    int somme = 0;
    for (int i = 0; i < taille; i++)
    {
        somme += elements[i] ;
    }
    return somme;
}


int Tableau::plusPetitElement()
{
    int min = *elements;

    for(int i=0 ; i<= taille ; i++)
    {
      if(*(elements + i) > max)
      {
          max =*(elements + i);
      }
    }
    return min;
}


int main()
{
    /*
        Ici, nous demandons un entier n a l'utilisateur pour 
        en faire la taille de notre tableau
    */
    int n;
    cout << "Donnez n svp : ";
    cin >> n;
    
    Tableau T1(n); // Déclaration du tableau 

    // Boucle pour remplir le tableau

    for(int i = 0; i < n; i++)
    {
        cout << "\t T[" << i+1 <<"] : " ;
        cin >> T1.elements[i];
    }

    // Implémentation de afficherDonne()
    T1.afficherDonne();
    
    cout << "Min des éléments du tableau : " << T1.plusPetitElement() << endl;

    cout << endl;     
    return 0;
}
