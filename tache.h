#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct tache
{
	static std::vector <std::string> load(std::string& nomFichier);

	static void add(std::string &Tache ,const std::string &nomFichier , std::vector<std::string> &tableau);
};

