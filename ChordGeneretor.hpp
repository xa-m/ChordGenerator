#pragma once
#include <map>
#include <iostream>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::map; using std::copy;

class ChordGeneretor
{

private:
	int getNumberofNote(std::string note);
	std::string getNotebyNumber(int number);
	std::map<int, std::string> notes =
	{
		{0, "C1"},
		{1, "D1"},
		{2, "E1"},
		{3, "F1"},
		{4, "G1"},
		{5, "A1"},
		{6, "B1"},
		{7, "C2"},
		{8, "D2"},
		{9, "E2"},
		{10, "F2"},
		{11, "G2"},
	};

	/*std::map<int, std::string> chords =
	{
		{0, "C1 E1 G1"},
		{1, "D1 F1 A1"},
		{2, "E1 G1 B1"},
		{3, "F1 A1 C2"},
		{4, "G1 B1 D2"},
		{5, "A1 C2 E2"},
		{6, "B1 D2 F2"},
	};*/

	std::map<int, std::string> chords =
	{
		{0, "0 2 4"},
		{1, "1 3 5"},
		{2, "2 4 6"},
		{3, "3 5 7"},
		{4, "4 6 8"},
		{5, "5 7 9"},
		{6, "6 8 10"},
	};

	int findChordForNote(int noteNumber);
	

	std::string getChordNoteNumbers(int chordNumber);
	int hardnessLevel = 1;
public:
	void getNotes();
	void getCombinations();

	std::string inputNotes;
	std::string notesArray[32];
	
	void setHardnessLevel(int hardness);
};

