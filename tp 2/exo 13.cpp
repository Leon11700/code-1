#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string const nomFichier("C:\\Users\\Admin\\Desktop\\scores.txt");
    ofstream Leon_flux(nomFichier.c_str());
    if (Leon_flux)
    {
        Leon_flux <<"je peux ecrire une phrase dans un fichier." << endl;
        Leon_flux << 48.9845 << endl;
        int age(18);
        Leon_flux << "J'ai" << age <<"ans. Je suis majeur." << endl;
    }
    else
    {
        cout <<"ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}