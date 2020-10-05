#pragma once
#include "Sort.h"
class VolVie : public Sort
{
public:
	VolVie(int* vie, int* mana);
	virtual ~VolVie();
	void lancerSort();
	void quelSort();
};

