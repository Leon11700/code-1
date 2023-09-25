#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("C:\\Users\\Admin\\Desktop\\scores.txt");
    ofstream Leon_flux(nomFichier.c_str(), ios::app);
    if(Leon_flux)
    {
        Leon_flux <<"Je rajoutes une ligne dans mon fichier." << endl;
    }
    else
    {
        cout <<"ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}