#include "Soin.h"

void Soin::lancerSort(int &vie, int &mana)
{
	cout << "Le mage lance Soin !" << endl;
	int* pointeurMage = &vie;
	*pointeurMage += 200;
	cout << "Le mage a maintenant " << *pointeurMage << " points de vie !" << endl;
	pointeurMage = &mana;
	*pointeurMage -= 30;
	cout << "Le mage a maintenant " << *pointeurMage << " points de mana !" << endl;

}
