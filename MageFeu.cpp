#include "MageFeu.h"

MageFeu::MageFeu()
{
	this->mana = 105;
	this->vie = 250;
	this->typeMage = "feu";
}

MageFeu::MageFeu(int niveau)
{
	this->mana = 105 + 80 * niveau;
	this->vie = 250 + 50 * niveau;
	this->typeMage = "feu";
}

MageFeu::~MageFeu()
{
}


