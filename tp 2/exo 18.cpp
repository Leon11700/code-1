#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream Leon_flux;
    Leon_flux.open("C:\\Users\\Admin\\Desktop\\scores.txt");
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