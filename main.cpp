// ChordGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.

extern "C" {
#include "Messages.h"
}

#include <iostream>
#include "ChordGeneretor.hpp"
#include <string>
#include <sstream>

int main()
{
	ChordGeneretor cg;
	int hardnessInput;
	wellcomeMessage();
	
	system("pause");

	std::cout << "Notes: ";
	std::getline(std::cin, cg.inputNotes);
	

	std::cout << "\nHardness level(1 or 2): ";
	std::cin >> hardnessInput;
	std::cout << std::endl;
	cg.setHardnessLevel(hardnessInput);


	// protocols
	cg.getNotes();
	cg.getCombinations();

	system("pause");
	return NULL;
}
