#include <iostream>
using namespace std;
int main()
{
    double pi(3.14159);
    bool lampe(true);
    char lettre('A');
    string chaine("Cest une chaîne de caractères");

    cout <<"Le chiffre pi a comme valeur:" << pi << "." << endl;
    cout <<"La lampe est:" << lampe << "(0 pour éteindre et 1 pour allumée)." << endl;
    cout <<"La lettre à  afficher est:"<< lettre << "." << endl;
    cout <<"La chaine de caracteres à afficher est:" << chaine << "." << endl;
    return 0;
}