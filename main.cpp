#include <iostream>
using namespace std;
int main() {
 
  const float coutHoraire = 4.0;
 int velosDispos = 20;
 int capacite= 20;
 int choix;
do {
 cout << "****** Gestion d'une station Vélô ******" << endl << endl;
 cout << "-----------------------------------------" << endl;
 cout << "vélos disponible :" << velosDispos << endl ;
 cout << "Points d'atache disponible :" << capacite - velosDispos << endl ;
 cout << "-----------------------------------------" << endl<< endl;
 cout << "1. Emprunter un vélô électrique" << endl;
 cout << "2. Restituer un vélô électrique" << endl;
 cout << "3. Estimer le coût de la location" << endl;
 cout << "4. Quitter l'application" << endl << endl;
 
   cin >> choix;
  if (choix <= 0){
    std::cout << "Choix invalide";
  }
  else if (choix >=5){
    std::cout << "Choix invalide";
  }
  switch (choix) {
      case 1:
        cin << velosDispos;
          cin << capacite;
        std::cout << "vous avez prit un velo" <<
       velosDispos - 1 <<":" << capacite + 1 << " 
 nombre de place dispos"<<std::endl;
        cin >> velosDispos;
          cin >> capacite;
        break;
      case 2:
        std::cout << "Vous avez choisi Restituer un vélô électrique ";
        break;
      case 3:
        std::cout << "Estimer le coût de la location";
        break;
      case 4:
        std::cout << " au revoir";
        break;
  }
  
} while (choix != 4);
    return 0;
   }

 


