#include "tache.h"
std::vector<std::string> tache::load(std::string& nomFichier)
{
	std::vector <std::string>* Load = new std::vector <std::string>;
	
	std::fstream* fichier = new std::fstream;

	fichier->open(nomFichier, std::fstream::app | std::fstream::out | std::fstream::in);

	char stokage [256];

	if (fichier->is_open())
	{
		fichier->getline(stokage, 256);

		Load->push_back(stokage);
	}

	else
		printf("erreur void tache::add tache.cpp fichier is not open");

	return *Load;

	delete Load;
}

void tache::add(std::string& Tache,const std::string& nomFichier, std::vector<std::string>& tableau)
{
	std::fstream* fichier = new std::fstream;

	tableau.push_back(Tache);

	fichier->open(nomFichier, std::fstream::app | std::fstream::out | std::fstream::in);

	if (fichier->is_open())
		(*fichier) << Tache << "\n";

	else
		printf("erreur void tache::add tache.cpp fichier is not open");

	fichier->close();

	delete fichier;
};
