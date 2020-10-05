#pragma once
#include "Mage.h"
#include <iostream>
using namespace std;
class MageEau : public Mage
{
public:
	MageEau();
	MageEau(int niveau);

	virtual ~MageEau();
	Sort* sort = new Soin(&this->vie, &this->mana);
	







};

