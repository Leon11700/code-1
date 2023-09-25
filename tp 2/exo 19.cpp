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
        int position = Leon_flux.tellp();
        cout <<"Nous nous situons au " << position <<"eme caractere du fichier." << endl;
    }
    else
    {
        cout <<"ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    return 0;

    
}