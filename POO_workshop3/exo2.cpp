


#include "exo2.h"
#include "exo.h"
#include <iostream>


StockageObjets2D::StockageObjets2D() : head(nullptr), tail(nullptr) {}


StockageObjets2D::StockageObjets2D(int nombreObjets) {
    objets.reserve(nombreObjets);
}

StockageObjets2D::~StockageObjets2D() {
    listechainee* current = head;
    while (current != nullptr) {
        listechainee* next = current->next;
        delete current->donnee; 
        delete current;       
        current = next;
    }
}

void StockageObjets2D::ajouter(objet2D* nouvelObjet) {
    objets.push_back(nouvelObjet);
}

void StockageObjets2D::ajouter(objet2D* nouvelObjet, int index) {
    if (index >= 0 && index <= static_cast<int>(objets.size())) {
        objets.insert(objets.begin() + index, nouvelObjet);
    }
    else {
        std::cout << "Index invalide. L'objet n'a pas été ajouté." << std::endl;
    }
}

void StockageObjets2D::afficherInfos() const {
    for (objet2D* objet : objets) {
        std::cout << objet->afficheInfo() << std::endl;
    }
}
//-------------- workshop-4_exo-2-----------------------


void StockageObjets2D::ajouterAtHead(objet2D* nouvelObjet) {
    listechainee* newlistechainee = new listechainee{ nouvelObjet, head };
    head = newlistechainee;
    if (tail == nullptr) {
        tail = head;
    }
}

void StockageObjets2D::ajouterAtTail(objet2D* nouvelObjet) {
    listechainee* newlistechainee = new listechainee{ nouvelObjet, nullptr };
    if (tail == nullptr) {
        head = tail = newlistechainee;
    }
    else {
        tail->next = newlistechainee;
        tail = newlistechainee;
    }
}

void StockageObjets2D::ajouterAtIndex(objet2D* nouvelObjet, int index) {
    if (index < 0) {
        std::cout << "merci d'utiliser un index positif" << std::endl;
        return;
    }

    if (index == 0) {
      
        ajouterAtHead(nouvelObjet);
    }
    else {
        listechainee* current = head;
        int currentIndex = 0;

     
        while (current != nullptr && currentIndex < index - 1) {
            current = current->next;
            currentIndex++;
        }

        if (current != nullptr) {
          
            listechainee* newlistechainee = new listechainee{ nouvelObjet, current->next };

            current->next = newlistechainee;

           
            if (newlistechainee->next == nullptr) {
                tail = newlistechainee;
            }
        }
        else {
            std::cout << "Index hors limites." << std::endl;
        }
    }
}

void StockageObjets2D::supprimerAtIndex(int index) {
    if (index < 0) {
        std::cout << "merci d'utiliser un index positif" << std::endl;
        return;
    }

    if (index == 0) {
       
        if (head != nullptr) {
            listechainee* temp = head;
            head = head->next;
            delete temp->donnee;
            delete temp;
            
            if (head == nullptr) {
                tail = nullptr;
            }
        }
        else {
            std::cout << "Liste vide" << std::endl;
        }
    }
    else {
        listechainee* current = head;
        int currentIndex = 0;

       
        while (current != nullptr && currentIndex < index - 1) {
            current = current->next;
            currentIndex++;
        }

        if (current != nullptr && current->next != nullptr) {
          
            listechainee* temp = current->next;
            current->next = current->next->next;
            delete temp->donnee;
            delete temp;
     
            if (current->next == nullptr) {
                tail = current;
            }
        }
        else {
            std::cout << "Tu ne peux pas supprimer le vide :)" << std::endl;
        }
    }
}

void StockageObjets2D::afficherInfos2() const {
    listechainee* current = head;
    while (current != nullptr) {
        std::cout << current->donnee->afficheInfo() << std::endl;
        current = current->next;
    }
}

