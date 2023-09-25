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
        // Les instructions seont situés ici pour utiliser ce fichier.
    }
    else
    {
        cout <<"ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    Leon_flux.close();
    return 0;

    
}