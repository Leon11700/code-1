#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("C:\\Users\\Admin\\Desktop\\test.txt");
    ifstream Leon_flux(nomFichier.c_str());
    if (Leon_flux)
    {
        cout <<"Pas de souci lors de l'ouverture du fichier." << endl;
    }
    else
    {
        cout <<"ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}