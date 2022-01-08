#include <iostream>
#include "ChordGeneretor.hpp"
#include <sstream>



void ChordGeneretor::getNotes()
{
	for (int i = 0; i < inputNotes.size(); i++) {
		inputNotes.at(i) = toupper(inputNotes.at(i));
	}

	int i = 0;
	std::stringstream ssin(inputNotes);
	while (ssin.good() && i < 32) {
		ssin >> notesArray[i];
		++i;
	}
}

void ChordGeneretor::getCombinations()
{
	for (int i = 0; i < 32; i++)
	{
		int currentNoteNumber = getNumberofNote(notesArray[i]);

		if (findChordForNote(currentNoteNumber) != -1)
		{
			int currentChordNumber = findChordForNote(currentNoteNumber);
			cout << notesArray[i] << "\t" << getChordNoteNumbers(currentChordNumber) << endl;
		}
	}
}

std::string ChordGeneretor::getChordNoteNumbers(int chordNumber)
{
	return chords[chordNumber];
}

int ChordGeneretor::getNumberofNote(std::string note)
{
	for (int i = 0; i < note.size(); i++) {
		note.at(i) = toupper(note.at(i));
	}
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


int ChordGeneretor::findChordForNote(int noteNumber)
{
	for (int i = 0; i < 7; i++)
	{
		auto chord = chords[i];
		string chordNoteArray[3];


		int count = 0;
		std::stringstream ssin(chord);
		while (ssin.good() && count < 4) {
			ssin >> chordNoteArray[count];
			++count;
		}
		for (int q = 0; q < 4; q++)
		{
			if (chordNoteArray[q] == std::to_string(noteNumber))
			{
				return i;
			}
		}
	}

	return -1;
}


std::string ChordGeneretor::getNotebyNumber(int number)
{
	return notes[number];
}
