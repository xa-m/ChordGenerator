// ChordGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "ChordGeneretor.hpp"
#include <string>
#include <sstream>


int main()
{
	ChordGeneretor cg;


	std::cout << "github: xa-m" << std::endl << std::endl;
	std::cout << "Wellcome to chord generetor." << std::endl;
	std::cout << "\tYou need to input your major notes with 1(one) space to input area,\n\tand you will get suitable chords for this notes." << std::endl;
	system("pause");

	std::cout << "Notes: ";
	std::getline(std::cin, cg.inputNotes);
	
	// protocols
	cg.getNotes();
	cg.getCombinations();


	//cout << cg.notesArray[10] << endl;
}
