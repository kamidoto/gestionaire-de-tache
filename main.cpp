#include "tache.h"

bool finish = false;

int main()
{
	std::string tache;

	const std::string nomfichier = "tache.txt";

	std::vector<std::string> vector = tache::load(nomfichier);

	std::string actionChoisie;

	while (finish == false)
	{
		std::cin >> actionChoisie;

		if (actionChoisie == "?" || actionChoisie == "help" || actionChoisie == "h")
			std::cout << "help : ? || help || h\nadd : a || add\ndisplay : d || display\nexit : e || exit ";

		else if (actionChoisie == "a" || actionChoisie == "add")
		{
			do
			{
				std::getline(std::cin, tache);

				if (tache.size() > 256)
					printf("out of range char main.cpp lg 13");

			} while (tache.size() > 256);

			tache::add(tache, nomfichier, vector);
		}

		else if (actionChoisie == "d" || actionChoisie == "display")
		{
			for (int i = 0; vector.size() > i;)
			{
				std::cout << vector[i] << std::endl;

				i++;
			}
		}

		else if (actionChoisie == "e" || actionChoisie == "exit")
		{
			finish = true;
		}
	}
}