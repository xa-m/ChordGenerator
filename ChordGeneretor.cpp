#include <iostream>
#include "ChordGeneretor.hpp"
#include <sstream>
#include <string>



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
			string currentChordNotesArray[3] = {};
			int currentChordNumber = findChordForNote(currentNoteNumber);
			string chordNumberString = getChordNoteNumbers(currentChordNumber);

			int q = 0;
			std::stringstream ssin(chordNumberString);
			while (ssin.good() && q < 3) {
				ssin >> currentChordNotesArray[q];
				++q;
			}

			int note1 = std::stoi(currentChordNotesArray[0]);
			int note2 = std::stoi(currentChordNotesArray[1]);
			int note3 = std::stoi(currentChordNotesArray[2]);

			string note1String = getNotebyNumber(note1);
			string note2String = getNotebyNumber(note2);
			string note3String = getNotebyNumber(note3);

			cout << notesArray[i] << "\t" << note1String << " " << note2String << " " << note3String << endl;

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
	if (hardnessLevel == 1)
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
				// 0 1 2 3
				if (chordNoteArray[q] == std::to_string(noteNumber))
				{
					return i;
				}
			}

		}
	}
	else if (hardnessLevel == 2)
	{
		int i = 6;
		while (i >= 0)
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
				// 0 1 2 3
				if (chordNoteArray[q] == std::to_string(noteNumber))
				{
					return i;
				}
			}
			i -= 1;
		}
	}

	return -1;
}


std::string ChordGeneretor::getNotebyNumber(int number)
{
	return notes[number];
}
