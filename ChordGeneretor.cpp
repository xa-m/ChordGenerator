#include <iostream>
#include "ChordGeneretor.hpp"



void ChordGeneretor::getNotes()
{
	auto note = notes.find(0);

	//std::cout << notes[1] << std::endl;


	//std::cout << getNumberofNote("C2") << std::endl;
}


int ChordGeneretor::getNumberofNote(std::string note)
{
	for (int i = 0; i < 12; i++)
	{
		if (notes[i] == note)
		{
			return i;
		}
	}

	// nothing find
	return -1;
}

std::string ChordGeneretor::getNoteofNumber(int number)
{
	return notes[number];
}
