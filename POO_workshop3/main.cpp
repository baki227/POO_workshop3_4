#include "exo.h"
#include "exo2.h"
using namespace std;

#include <iostream>

int main() {
  

    /*
    StockageObjets2D stockage(5);

    stockage.ajouter(new rectangle(3, 4));
    stockage.ajouter(new cube(5));
    stockage.ajouter(new rectangle(2, 8));
    stockage.ajouter(new cube(7), 1);

 
    stockage.afficherInfos();

    return 0;
    */
    /*
    int choix;
    cout << "Choisissez le type d'objet (1 pour rectangle, 2 pour cube) : ";
    cin >> choix;

    objet2D* obj1;

  


    if (choix == 1) {
        int dim1, dim2;
        cout << "Entrez la première dimension : ";
        cin >> dim1;
        cout << "Entrez la deuxième dimension : ";
        cin >> dim2;
        obj1 = new rectangle(dim1, dim2);

    }
    else if (choix == 2) {
        int cote;
        cout << "Entrez la première dimension : ";
        cin >> cote;
        obj1 = new cube(cote);
    }
    else {
        cout << "Choix invalide." << endl;
        return 1;
    }



    cout << obj1->afficheInfo() << endl;
    cout << "Aire : " << obj1->getAire() << endl;
    cout << "Périmètre : " << obj1->getPerimetre() << endl;


    StockageObjets2D stockage(5);

    stockage.ajouter(new rectangle(3, 4));
    stockage.ajouter(new cube(5));
    stockage.ajouter(new rectangle(2, 8));
    stockage.ajouter(new cube(7));
    stockage.ajouter(obj1);

    stockage.afficherInfos();
    delete obj1;

    objet2D obj(5);

    // Utilisation du getter pour obtenir le pointeur
    int* pointeurduGetter = obj.ptrOptrObj2D();

    // Utilisation du pointeur obtenu
    std::cout << "Valeur de mon pointeur: " << *pointeurduGetter << std::endl;

    return 0;
    */


	/*
	objet2D obj1(13,3);
	cout << obj1.afficheInfo()<< endl;
	cout << obj1.getAire() << endl;
	cout << obj1.getPerimetre() << endl;


	rectangle rec1(2, 5);
	cout << rec1.getAire() << endl;
	cout << rec1.getPerimetre() << endl;
	cout << rec1.afficheInfo() << endl;


	cube cube1(4);
	cout << cube1.getAire() << endl;
	cout << cube1.getPerimetre() << endl;
	cout << cube1.getCote() << endl;
	cout << cube1.afficheInfo() << endl;
	*/


        objet2D* obj1 = new rectangle(4, 5);
        objet2D* obj2 = new cube(10);
        objet2D* obj3 = new cube(2);

        
        StockageObjets2D stockage;
        stockage.ajouterAtHead(obj1);
        stockage.ajouterAtTail(obj2);
        stockage.ajouterAtHead(obj3);

        stockage.afficherInfos2();

    
        stockage.supprimerAtIndex(1);
        cout << "suppression effectuée" << endl;
        stockage.afficherInfos2();



        stockage.supprimerAtIndex(1);
        stockage.supprimerAtIndex(0);

        stockage.supprimerAtIndex(0);
      
      
        stockage.afficherInfos2();
        

        return 0;
   

}