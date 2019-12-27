// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// HackerEarth - Monk Takes a Walk
// Problem Statement - https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/
// Main.cpp


#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;

int main()
{
	int testCases, count = 0;
	string userInput;

	cin >> testCases;

	for (int i = 1; i <= testCases; i++)
	{
		cin >> userInput;
		for (int i = 0; i < userInput.length(); i++)
		{
			if (userInput[i] == 'A' || userInput[i] == 'E' || userInput[i] == 'I' || userInput[i] == 'O' || userInput[i] == 'U' || userInput[i] == 'a' || userInput[i] == 'e' || userInput[i] == 'i' || userInput[i] == 'o' || userInput[i] == 'u' )
				count = count + 1;
		}
		cout << count << endl;
		count = 0;
	}

	return 0;
}