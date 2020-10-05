#include "Soin.h"

Soin::Soin(int* vie, int* mana)
{
	pointeurVie = vie;
	pointeurMana = mana;
	cout << pointeurVie << "     " << pointeurMana << endl;
}

Soin::~Soin()
{
}

void Soin::lancerSort()
{
	cout << "Le mage lance Soin !" << endl;

	*pointeurVie += 200;
	cout << "Le mage a maintenant " << *pointeurVie << " points de vie !" << endl;
	*pointeurMana -= 30;
	cout << "Le mage a maintenant " << *pointeurMana << " points de mana !" << endl;

}
