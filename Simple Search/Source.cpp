// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// HackerEarth - Simple Search
// Problem Statement - https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/
// Main.cpp


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	long long int k;
	cin >> n;
	long long int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	cin >> k;

	for (int i = 0; i < n; i++)
	{
		if (a[i] == k)
			cout << i << endl;
	}

	return 0;
}