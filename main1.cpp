#include<iostream>
#include <string>
#include <fstream>
#include<vector>
#include <time.h>
#include "bst.h"
#include "songdata.h"
//#include "songdata.cpp"

using namespace std;

int main(){
	
	string filename = "songs.txt";
	vector<Song> V;
	Song s1;
	s1.readData( &V, filename);
	s1.displayAllSong(V);
	srand(time(NULL));
	
	BinaryTree<Song> tree;
	
	while(V.size() != 0){
		int r = rand() % V.size();
		tree.insertNode(V[r]);
		
		int i = 0;
		
		for(auto it = V.begin(); it != V.end(); ++it){
			if(i == r){
				V.erase(it);
				break;
			}
			i++;
		}
}

cout << "in order transversal" << endl;
tree.print();
cout << endl;
cout << "Searching an element" << endl;
tree.searchNode(5);

system("pause");
return 0;
}
