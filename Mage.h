#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include "Sort.h";
#include "VolVie.h";
#include "Soin.h";
#include "SuperBoom.h";

class Mage
{
public:
	Mage();
	Mage(int vie, int mana);

	virtual ~Mage();

	virtual string exporter();

	int getVie() const { return vie; }
	void setVie(int vie) { this->vie = vie; }

	int getMana() const { return mana; }
	void setMana(int mana) { this->mana = mana; }

	void enleverVie(int ajout) { this->vie -= ajout; }
	void enleverMana(int ajout) { this->mana -= ajout; }

	void ajouterVie(int ajout) { this->vie += ajout; }
	void ajouterMana(int ajout) { this->mana += ajout; }

	string getType() const { return typeMage; }
	void setType(string typeMage) { this->typeMage = typeMage; }
	Sort* sort = 0;

protected:
	
	string typeMage;
	int vie; // pour vie et mana, il faudrait rajouter une vieMax et manaMax, car pour l'instant c'est infini !
	int mana;

};

