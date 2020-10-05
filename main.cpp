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
using namespace std;


int main() {
	cout << "Test des Mages" << endl;

	Mage* mageSansAttribut = new Mage(25, 2);
	mageSansAttribut->sort->lancerSort();
	cout << mageSansAttribut->exporter() << endl;


	Mage* mageFeuHautNiveau = new MageFeu(130);
	//mageFeuHautNiveau->sort->lancerSort();
	cout << mageFeuHautNiveau->exporter() << endl;


	Mage* mageEauBasNiveau = new MageEau(2);
	//mageEauBasNiveau->sort->lancerSort();
	cout << mageEauBasNiveau->exporter() << endl;


	Mage* mageTenebre = new MageTenebre();
	//mageTenebre->sort->lancerSort();
	cout << mageTenebre->exporter() << endl;

}