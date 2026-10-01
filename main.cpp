#include "tache.h"

int main()
{
	std::string tache;
	const std::string nomfichier = "tache.txt";

	do
	{
		std::getline(std::cin, tache);

		if (tache.size() > 256)
			printf("out of range char main.cpp lg 13");

	} while (tache.size() > 256);

	std::cout << tache;

	std::vector<std::string> vector;

	tache::add(tache, nomfichier, vector);
}//bug : sa n'ecris pas dans le fichier...