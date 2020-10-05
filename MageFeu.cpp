#include "MageFeu.h"

MageFeu::MageFeu()
{
	this->mana = 105;
	this->vie = 250;
	this->typeMage = "feu";
	sort = new SuperBoom(&this->vie, &this->mana);
}

MageFeu::MageFeu(int niveau)
{
	this->mana = 105 + 80 * niveau;
	this->vie = 250 + 50 * niveau;
	this->typeMage = "feu";
	sort = new SuperBoom(&this->vie, &this->mana);
}

MageFeu::~MageFeu()
{
}


