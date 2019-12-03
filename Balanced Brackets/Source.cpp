// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// HackerEarth Balanced Brackets
// Problem Statement- https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/balanced-brackets-3-4fc590c6/description/
// Main.cpp


#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

// function template
bool isBalanced(string userInput);

stack <char> bracket;

// main function
int main()
{
	int testCases;
	cin >> testCases;

	for (int i = 0; i < testCases; i++)
	{
		string userInput;
		cin >> userInput;
		bool answer = isBalanced(userInput);
		if (answer == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		while (!bracket.empty())
			bracket.pop();
	}

	cout << endl;
	system("pause");
	return 0;
}

// isBalanced function 
bool isBalanced(string userInput)
{
	for (int i = 0; i < userInput.size(); i++)
	{
		if (userInput[i] == '(' || userInput[i] == '{' || userInput[i] == '[')
			bracket.push(userInput[i]);
		else
		{
			if (bracket.empty())  // if the string starts with closing bracket
				return false;
			else if (bracket.top() == '(' && userInput[i] == ')')
				bracket.pop();
			else if (bracket.top() == '{' && userInput[i] == '}')
				bracket.pop();
			else if (bracket.top() == '[' && userInput[i] == ']')
				bracket.pop();
			else
			{
				return false;
			}
		}
	}

	if (bracket.empty())
		return true;
}