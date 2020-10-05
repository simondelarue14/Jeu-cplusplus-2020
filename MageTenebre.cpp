#include "MageTenebre.h"

MageTenebre::MageTenebre()
{
	this->mana = 250;
	this->vie = 75;
	this->typeMage = "tenebre";
}

MageTenebre::MageTenebre(int niveau)
{
	this->mana = 250 + 100 * niveau;
	this->vie = 75 + 25 * niveau;
	this->typeMage = "tenebre";
}

MageTenebre::~MageTenebre()
{
}

