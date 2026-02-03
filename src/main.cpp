#include <iostream>
#include <string>
using namespace std;
int main (){
cout<<"Bienvenue, veuillez entrer le nombre d'eleve"<<endl;
int n;
cin>>n;
const int TAILLE=n;
string noms[TAILLE];float notes[TAILLE];
cout<<"tapez: "<<endl<<"1.pour saisir les noms des eleves"<<endl<<"2. pour saisir la notes des eleves"<<endl<<"3.pour calculer et afficher la moyenne des eleves"<<endl<<"4. pour quitter"<<endl;
int choix ;
cin>> choix;
do{
    switch(choix){
        case 1:
            cout<<"saisie des noms"<<endl;
            break;
        case 2:
            cout<<"saisie des notes"<<endl;
            break;
        case 3:
            cout<<"calcul et affichage de la moyenne"<<endl;
            break;
        case 4:
            cout<<"aurevoir"<<endl;
            break;
        default:
            cout<<"entree invalide"<<endl;
    }
}while(choix!=4);
return 0;
}
