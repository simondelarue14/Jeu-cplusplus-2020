#include "Mage.h"

//Constructeurs
Mage::Mage()
{
	this->mana = 100;
	this->vie = 100;
	this->typeMage = "commun";
	sort = new Sort(&this->vie, &this->mana);
}

Mage::Mage(int vie, int mana)
{
	this->mana = mana;
	this->vie = vie;
	this->typeMage = "commun";
	sort = new Sort(&this->vie, &this->mana);
}

//Destructeur
Mage::~Mage()
{

}

string Mage::exporter()
{
	stringstream xml;
	xml << "<Mage>" << "<type>" << this->typeMage << "</type" << "<vie>" << this->vie << "</vie" << "<mana>" << this->mana << "</mana" << "</Mage>";
	return xml.str();
}


void Mage::operator++() {

	this->vie += 100;
	this->mana += 100;
}
void Mage::operator++(int) {
	this->vie += 100;
	this->mana += 100;
}