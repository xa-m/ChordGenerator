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
	std::string getNoteofNumber(int number);


public:
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


	std::map<int, std::string> chords =
	{
		{0, "C1 D1 A1"},
		{1, "C2 G1 A2"},
		{2, "B1 D1 F1"},
	};


	void getNotes();
	std::string inputNotes;

};

