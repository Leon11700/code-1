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
        Leon_flux.seekp(0, ios::end);
        int taille;
        taille = Leon_flux.tellp();
        cout <<"Taille du fichier:" << taille <<"octets." << endl;
    }
    else
    {
        cout <<"ERREUR : impossible d'ouvrir le fichier." << endl;
    }
    return 0;

    
}