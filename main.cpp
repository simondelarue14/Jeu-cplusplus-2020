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


int main() {
	vector<Mage*> listeDeMages;
	cout << "Test des Mages" << endl;


	cout << "Mage sans attributs" << endl;
	Mage* mageSansAttribut = new Mage(25, 2);
	cout << "Il essaie de lancer un sort" << endl;
	mageSansAttribut->sort->quelSort();
	mageSansAttribut->sort->lancerSort();
	cout << mageSansAttribut->exporter() << endl;

	cout << "Mage de feu haut niveau" << endl;
	Mage* mageFeuHautNiveau = new MageFeu(130);
	cout << "Le mage a " << mageFeuHautNiveau->getVie() << " points de vie et " << mageFeuHautNiveau->getMana() << " mana" << endl;
	cout << "Il essaie de lancer un sort" << endl;
	mageFeuHautNiveau->sort->quelSort();
	mageFeuHautNiveau->sort->lancerSort();
	cout << "Le mage a " << mageFeuHautNiveau->getVie() << " points de vie et " << mageFeuHautNiveau->getMana() << " mana" << endl;
	cout << mageFeuHautNiveau->exporter() << endl;
	
	cout << "Mage d'eau bas niveau" << endl;
	Mage* mageEauBasNiveau = new MageEau(5);
	cout << "Il essaie de lancer un sort" << endl;
	mageEauBasNiveau->sort->quelSort();
	mageEauBasNiveau->sort->lancerSort();
	cout << mageEauBasNiveau->exporter() << endl;

	cout << "Mage de Tenebre niveau 1" << endl;
	Mage* mageTenebre = new MageTenebre();
	cout << "Il essaie de lancer un sort" << endl;
	mageTenebre->sort->quelSort();
	mageTenebre->sort->lancerSort();
	cout << mageTenebre->exporter() << endl;

	cout << "Le mage de Tenebre a " << mageTenebre->getVie() << " points de vie et " << mageTenebre->getMana() << " mana" << endl;
	cout << "On redonne de la vie et de la mana au mage de Tenebre" << endl;
	(*mageTenebre)++;
	cout << "Le mage de Tenebre a " << mageTenebre->getVie() << " points de vie et " << mageTenebre->getMana() << " mana" << endl;

}