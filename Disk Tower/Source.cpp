// Bismillahir Rahmanir Rahim
// Nafis Chowdhury
// HackerEarth- Disk Tower
// Problem Statement - https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/practice-problems/algorithm/disk-tower-b7cc7a50/
// Main.cpp


#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	priority_queue <int> pq;
	int N;
	cin >> N;
	int temp = N;  // storing N value in a temp variable
	int arrayN[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arrayN[i];  // input disk sizes in an array
	}

	for (int i = 0; i < N; i++)
	{
		pq.push(arrayN[i]);
		if (pq.top() != temp)
		{
			cout << endl;  // if the top element in the priority_queue is not same as temp value, then print a new line
		}
		else
		{
			while (pq.top() == temp)  
			{
				cout << pq.top() << ' ';  
				pq.pop();
				temp = temp - 1;
			}
			cout << endl;
		}
	}

	cout << endl;
	return 0;
}