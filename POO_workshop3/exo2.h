#pragma once
#include <vector>
#include "exo.h"

class StockageObjets2D {
private:
    std::vector<objet2D*> objets;

    struct listechainee {
        objet2D* donne;
        listechainee* next;
        listechainee(objet2D* obj, listechainee* nxt) : donne(obj), next(nxt) {}


    };

    listechainee* head;
    listechainee* tail;

public:

    StockageObjets2D();
    StockageObjets2D(int nombreObjets);
    ~StockageObjets2D();

    void ajouter(objet2D* nouvelObjet);
    void ajouter(objet2D* nouvelObjet, int index);
    void afficherInfos() const;
    void ajouterAtHead(objet2D* nouvelObjet);
    void ajouterAtTail(objet2D* nouvelObjet);
    void ajouterAtIndex(objet2D* nouvelObjet, int index);
    void supprimerAtIndex(int index);
    void afficherInfos2() const;
};
