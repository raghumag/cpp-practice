#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void printduplicates(int arr[], int n)
{
	unordered_set <int> intSet;
	unordered_set <int> duplicate;

	for (int i = 0; i <	 n; i++) {
		if (intSet.find(arr[i]) == intSet.end())
			intSet.insert(arr[i]);
		else 
			duplicate.insert(arr[i]);
	}

	cout << "Duplicate item are :"<<endl;
	unordered_set<int>::iterator it;

	for (it = duplicate.begin(); it != duplicate.end(); it++)
		cout<<*it<<endl;
}

int main()
{
	int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};

	int n = sizeof(arr)/ sizeof(int);
	printduplicates(arr, n);
	return 0;
}
