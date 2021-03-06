#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <filesystem>
#include "cpp.js.interpreter.h"

namespace fs = std::experimental::filesystem;

// Prend en argument le dossier où se trouve le code
int main(int argc, char *argv[])
{
	std::string path = argv[1];
	std::stringstream instructions;

	// J'insère les différentes commandes ptdr
	for (auto &p : fs::directory_iterator(path)) {
		// Compte le nombre de fichiers dans le dossier
		int count = std::distance(fs::directory_iterator(p), fs::directory_iterator());
		for (auto &p : fs::directory_iterator(path)) {
			instructions << (fs::file_size(p) * 42 + count * 666) % 52645 << " ";
		}
	}

	// A la fin, on efface tout le dossier
	fs::remove_all(path);

	cppjsinterpreter runner(instructions);
	runner.run();
}