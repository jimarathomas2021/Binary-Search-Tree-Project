#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "bst.h"
using namespace std;

class Song{
	public:
	int rank;
	string title;
	string artist;
	void display(){
		cout << "rank: " << endl;
		cout << "title: " << endl;
		cout << "artist: " << endl;
	}
	void readData(vector<Song> *V, string filename);
	void displayAllSong(vector<Song> V);
};
 inline bool operator<(Song const &s1, Song const &s2){
	return s1.rank < s2.rank;
}

inline bool operator== (Song const &s1, Song const &s2){
	return s1.rank == s2.rank;
}
