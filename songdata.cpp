#include<iostream>
#include <string>
#include <fstream>
#include<vector>
#include <time.h>
#include "bst.h"
#include "songdata.h"

using namespace std;

void readData(vector<Song> *V, string filename)
{
	//string filename = "songs.txt";
	ifstream cinn;
	cinn.open("songs.txt");
	
	if(!cinn){
	
	cout << "Unable to open file" << endl;
	return;
}
if(cinn)
{
Song S;
       int rank;
       string title,artist;
string str;
while(getline(cinn,str))
{  
       
       int i=0;
       int space=-1,comma=-1;
       for (auto it=str.begin(); it!=str.end(); it++){
           if(*it==' ' && space==-1)
               space=i;
           if(*it==',' && comma==-1){
               comma=i;
               break;
           }
           i++;
       }
       rank=stoi(str.substr(0,space));
       artist=str.substr(space+1,comma-space-1);
       title=str.substr(comma+1);
       S.rank=rank;
       S.artist=artist;
       S.title=title;
       V->push_back(S);
}  
cinn.close();
}
}

void displayAllSong(vector<Song> V){
	cout << "ALL song" << endl;
	
	for(auto s = V.begin(); s != V.end(); ++s){
		cout << "rank" << s-> rank << endl;
		cout << "title" << s -> title << endl;
		cout << "artist" << s -> artist << endl;
		
	}
};

/*inline bool operator<(Song const &s1, Song const &s2){
	return s1.rank < s2.rank;
}

inline bool operator== (Song const &s1, Song const &s2){
	return s1.rank == s2.rank;
}*/
