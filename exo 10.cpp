#include <iostream>
using namespace std;
int main()
{
    string nom_prenom;
    cout <<"Quel est votre nom et votre prénom ?"<< endl;
    getline (cin,nom_prenom);
    cout <<"Votre nom et votre prenom sont:" << nom_prenom <<"." << endl;
    return 0;
}