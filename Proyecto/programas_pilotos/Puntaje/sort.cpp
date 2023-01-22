#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <vector>
using namespace std;

// structure holding info on a player
struct player
{
	int time,date,score;
};

// vector to store the players
vector<player> vectorplayers;

// basic bubblesort, slow sort but depends how fast you want to be.
void BasicBubbleSort(vector<player> &vector)
{
	for(int x=0; x<vector.size(); x++)
	{
		for(int y=0; y<vector.size()-1; y++)
		{
			if(vector[y].score > vector[y+1].score)
			{
				player temp = vector[y+1];
				vector[y+1] = vector[y];
				vector[y] = temp;
			}
		}
	}
}

void print()
{
	// iterate vector and print each players score
	for(int i(0); i<vectorplayers.size(); i++)
		cout<<"score : " << vectorplayers[i].score <<endl;
}

void main()
{
	// create some data to put in the vector to sort
	player player1,player2,player3,player4;
	player1.score = 2;
	player2.score = 21;
	player3.score = 34;
	player4.score = 1;

	vectorplayers.push_back(player1);
	vectorplayers.push_back(player2);
	vectorplayers.push_back(player3);
	vectorplayers.push_back(player4);

	int highscore;

	while(1)
	{
		// read in a new score, you could just have the score of the player
		cin >> highscore;
		player newplayer;
		newplayer.score = highscore;
		// add the new score to the vector
		vectorplayers.push_back(newplayer);
		// sort the vector so its in order and print
		BasicBubbleSort(vectorplayers);
		print();
	}
}