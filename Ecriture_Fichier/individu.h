#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class individu
{

	string NumeroSecuriteSociale;
	string Nom;
	string Prenom;
	int JourNaissance;
	int MoisNaissance;
	int AnneeNaissance;
	string Profession;

public:

	individu( string nNSS, string nNom, string nPre, int nJN, int nMN, int nAN, string nPro);
	string getnom() const;
	string getprenom() const;
	string getnumsecsoc() const;
	string getdateanniv() const;
	string getprof() const;
	void setprof(string newProf);
	~individu();

};

