#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("C:\\Users\\Admin\\Desktop\\scores.txt");
    ifstream Leon_flux(nomFichier.c_str());
    if (Leon_flux)
    {
        string ligne; // on crée une variable pour stocker les lignes
        while(getline(Leon_flux,ligne))
        cout << ligne << endl;
    }
    else
    {
        cout <<"ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    return 0;

    
}