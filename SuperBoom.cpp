#include "SuperBoom.h"

SuperBoom::SuperBoom(int* vie, int* mana)
{
	pointeurVie = vie;
	pointeurMana = mana;
	//cout << pointeurVie << "     " << pointeurMana << endl;
}

SuperBoom::~SuperBoom()
{
}

void SuperBoom::lancerSort()
{
	cout << "Le mage lance SuperBoom !" << endl;
	*pointeurVie -= 30;
	cout << "Le mage c'est fait mal en lancant, il a maintenant " << *pointeurVie << " points de vie !" << endl;
	*pointeurMana -= 40;
	cout << "Le mage a maintenant " << *pointeurMana << " points de mana !" << endl;

}

void SuperBoom::quelSort()
{
	cout << "Sort de Super Boom" << endl;
}
