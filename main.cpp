#include <iostream>
#include <string>
#include "Mage.h"
#include "MageEau.h";
#include "MageFeu.h";
#include "MageTenebre.h";
#include "Sort.h";
#include "Soin.h";
#include "VolVie.h";
#include "SuperBoom.h";
#include <vector>
using namespace std;
bool partie = true;

int main() {
	vector<Mage*> listeDeMages;
	cout << "Test des Mages" << endl;


	cout << "Mage sans attributs" << endl;
	Mage* mageSansAttribut = new Mage(25, 2);
	listeDeMages.push_back(mageSansAttribut);
	/*cout << "Il essaie de lancer un sort" << endl;
	mageSansAttribut->sort->quelSort();
	mageSansAttribut->sort->lancerSort();
	cout << mageSansAttribut->exporter() << endl;*/

	cout << "Mage de feu haut niveau" << endl;
	Mage* mageFeuHautNiveau = new MageFeu(130);
	listeDeMages.push_back(mageFeuHautNiveau);
	/*cout << "Le mage a " << mageFeuHautNiveau->getVie() << " points de vie et " << mageFeuHautNiveau->getMana() << " mana" << endl;
	cout << "Il essaie de lancer un sort" << endl;
	mageFeuHautNiveau->sort->quelSort();
	mageFeuHautNiveau->sort->lancerSort();
	cout << "Le mage a " << mageFeuHautNiveau->getVie() << " points de vie et " << mageFeuHautNiveau->getMana() << " mana" << endl;
	cout << mageFeuHautNiveau->exporter() << endl;*/
	
	cout << "Mage d'eau bas niveau" << endl;
	Mage* mageEauBasNiveau = new MageEau(5);
	listeDeMages.push_back(mageEauBasNiveau);
	/*cout << "Il essaie de lancer un sort" << endl;
	mageEauBasNiveau->sort->quelSort();
	mageEauBasNiveau->sort->lancerSort();
	cout << mageEauBasNiveau->exporter() << endl;*/

	cout << "Mage de Tenebre niveau 1" << endl;
	Mage* mageTenebre = new MageTenebre();
	listeDeMages.push_back(mageTenebre);
	/*cout << "Il essaie de lancer un sort" << endl;
	mageTenebre->sort->quelSort();
	mageTenebre->sort->lancerSort();
	cout << mageTenebre->exporter() << endl;

	cout << "Le mage de Tenebre a " << mageTenebre->getVie() << " points de vie et " << mageTenebre->getMana() << " mana" << endl;
	cout << "On redonne de la vie et de la mana au mage de Tenebre" << endl;
	(*mageTenebre)++;
	cout << "Le mage de Tenebre a " << mageTenebre->getVie() << " points de vie et " << mageTenebre->getMana() << " mana" << endl;*/
	char choix;
	int choixType;
	int numero = 1;
	vector<Mage*>::iterator visiteurMages;
	while (partie) {
		cout << "Menu : \r Que voulez-vous faire ?" << endl;
		cout << "Tapez 1 pour lister les caracteristiques de tout les mages" << endl;
		cout << "Tapez 2 pour faire lancer un sort" << endl;
		cout << "Tapez q pour quitter" << endl;

		cin >> choix;
		cin.ignore();
		switch (choix) {

		case '1':
			cout << "Affichage des caracteristiques de tout les mages" << endl;
			for (visiteurMages = listeDeMages.begin(); visiteurMages < listeDeMages.end(); visiteurMages++)
			{
				cout << "Le mage est de type " << (*visiteurMages)->getType() << endl;
				cout << "Le mage a " << (*visiteurMages)->getVie() << " de vie"<< endl;
				cout << "Le mage a " << (*visiteurMages)->getMana() <<" de mana"<< endl;

			}
			break;

		case '2':
			cout << "Quel mage doit lancer un sort ?" << endl;
			
			for (visiteurMages = listeDeMages.begin(); visiteurMages < listeDeMages.end(); visiteurMages++)
			{

				cout << numero << ": Le mage de type " << (*visiteurMages)->getType() << endl;
				numero++;
			}

			cin >> choixType;
			visiteurMages = listeDeMages.begin();
			switch (choixType)
			{
			case 1:
				(*visiteurMages)->sort->lancerSort();
				break;
			case 2:
				visiteurMages++;
				(*visiteurMages)->sort->lancerSort();
				break;
			case 3:
				visiteurMages++;
				visiteurMages++;
				(*visiteurMages)->sort->lancerSort();
				break;
			case 4:
				visiteurMages++;
				visiteurMages++;
				visiteurMages++;
				(*visiteurMages)->sort->lancerSort();
				break;
			default:
				cout << "Veuillez entrer un mage existant" << endl;
				break;
			}
			break;

		case 'q' : case 'Q':
			//insérer ici le code pour gérer la sauvegarde des xml dans un fichier
			partie = false;
			break;

		default:
			cout << "Veuillez entrer un choix valide a partir des choix disponibles dans le menu" << endl;
			break;



		}


	}
}