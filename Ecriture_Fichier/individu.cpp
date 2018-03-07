#include "individu.h"

individu::~individu()
{
}

individu::individu(string nNSS, string nNom, string nPre, int nJN, int nMN, int nAN, string nPro)
{

	NumeroSecuriteSociale = nNSS;
	Nom = nNom;
	Prenom = nPre;
	JourNaissance = nJN;
	MoisNaissance = nMN;
	AnneeNaissance = nAN;
	Profession = nPro;

}

string individu::getnom() const
{

	return Nom;

}

string individu::getprenom() const
{

	return Prenom;

}

string individu::getnumsecsoc() const
{

	return NumeroSecuriteSociale;

}

string individu::getdateanniv() const
{


	return to_string(JourNaissance) + to_string(MoisNaissance) + to_string(AnneeNaissance);

}

string individu::getprof() const
{

	return Profession;

}

void individu::setprof(string newProf)
{

	Profession = newProf;

}
