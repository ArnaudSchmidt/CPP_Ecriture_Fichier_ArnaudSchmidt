#include "individu.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

void AfficheIndividu(individu * aAfficher);

int main()
{

	//déclaration des variables "utiles"
	string content;
	string str;
	//int i = 0;

	//création d'un nouvel individu
	individu newIndividu("00000000A", "Schmidt", "Arnaud", 12, 01, 1994, "Eleve");

	//affichage de ce nouvel individu
	cout << "Nouvel individu :" << endl;
	AfficheIndividu(&newIndividu);

	//modification de la profession
	string newProf = "Prof";
	newIndividu.setprof(newProf);

	//affichage de l'individu modifié
	cout << "Individu apres modification :" << endl;
	AfficheIndividu(&newIndividu);

	//ouverture du fichier en mode écriture
	ofstream thefile;
	thefile.open("Individus.txt");

	//écriture des données dans le fichier
	thefile << newIndividu.getnom() << endl;
	thefile << newIndividu.getprenom() << endl;
	thefile << newIndividu.getnumsecsoc() << endl;
	thefile << newIndividu.getdateanniv() << endl;
	thefile << newIndividu.getprof() << endl;

	//on referme le fichier
	thefile.close();

	//ouverture du fichier en mode lecture
	ifstream thesamefile;
	thesamefile.open("Individus.txt");

	//on parcourt le fichier puis on stock les données dans une variable
	while (getline(thesamefile, str))
	{
		content += str;
		content.push_back('\n');
	}
	
	//on referme le fichier
	thesamefile.close();

	//on affiche les données récupérées depuis le fichier
	cout << "Individu dans le fichier :" << endl;
	cout << content << endl;
	
	system("pause");

	return 0;

}

void AfficheIndividu(individu * aAfficher)
{

	cout << aAfficher->getnumsecsoc() << endl;
	cout << aAfficher->getnom() << endl;
	cout << aAfficher->getprenom() << endl;
	cout << aAfficher->getdateanniv() << endl;
	cout << aAfficher->getprof() << endl;

}