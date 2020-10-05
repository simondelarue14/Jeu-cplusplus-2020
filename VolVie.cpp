#include "VolVie.h"

VolVie::VolVie(int* vie, int* mana)
{
	pointeurVie = vie;
	pointeurMana = mana;
	cout << pointeurVie << "     " << pointeurMana << endl;
}

VolVie::~VolVie()
{
}

void VolVie::lancerSort()
{
	cout << "Le mage lance vol vie !" << endl;
	*pointeurVie += 50;
	cout << "Le mage a maintenant " << *pointeurVie << " points de vie !" << endl;
	*pointeurMana -= 15;
	cout << "Le mage a maintenant " << *pointeurMana << " points de mana !" << endl;

}

void VolVie::quelSort()
{
	cout << "Sort vol de Vie" << endl;
}
