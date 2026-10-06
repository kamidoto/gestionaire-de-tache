#include "tache.h"

int main()
{
	std::string tache;

	const std::string nomfichier = "tache.txt";

	std::vector<std::string> vector = tache::load(nomfichier);

	do
	{
		std::getline(std::cin, tache);

		if (tache.size() > 256)
			printf("out of range char main.cpp lg 13");

	} while (tache.size() > 256);

	std::cout << tache << std::endl;

	tache::add(tache, nomfichier, vector);

	for (int i = 0; vector.size() > i;)
	{
		std::cout << vector[i] << std::endl;

		i++;
	}
}