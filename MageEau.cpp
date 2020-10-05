#include "MageEau.h"

MageEau::MageEau() {
	this->mana = 200;
	this->vie = 70;
	this->typeMage = "eau";
	sort = new Soin(&this->vie, &this->mana);
}

MageEau::MageEau(int niveau)
{
	this->mana = 200 + 50 * niveau;
	this->vie = 70 + 25 * niveau;
	this->typeMage = "eau";
}

MageEau::~MageEau()
{
}


