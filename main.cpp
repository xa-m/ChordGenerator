// ChordGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "ChordGeneretor.hpp"

#include <string>


int main()
{
	ChordGeneretor cg;

	cg.getNotes();

	std::cout << "github: xa-m" << std::endl << std::endl;
	std::cout << "Wellcome to chord generetor." << std::endl;
	std::cout << "\tYou need to input your major notes with 1(one) space to input area,\n\tand you will get suitable chords for this notes." << std::endl;
	system("pause");

	std::cout << "Notes: ";
	std::getline(std::cin, cg.inputNotes);
	
	// all uppercase
	for (int i = 0; i < cg.inputNotes.size(); i++) {
		cg.inputNotes.at(i) = toupper(cg.inputNotes.at(i));
	}
	
	cout << cg.inputNotes << std::endl;

}
