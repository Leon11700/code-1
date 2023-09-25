#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string const nomFichier("C:\\Users\\Admin\\Desktop\\scores.txt");
    ofstream Leon_flux(nomFichier.c_str());
    if (Leon_flux)
    {
        cout <<"Pas de souci lors de l'ouverture du fichier." << endl;
        // Les instructions seront situés ici pour modifier ce fichier.
    }
    else
    {
        cout <<"Erreur : impossible d'ouvri le fichier." << endl;
    }
    return 0;
}