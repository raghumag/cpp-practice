#include <bits/stdc++.h>

using namespace std;

int main()
{
	unordered_set <string> stringset;

	stringset.insert("code");
	stringset.insert("in");
	stringset.insert("c++");
	stringset.insert("is");
	stringset.insert("fast");
	stringset.insert("fast");
	stringset.insert("cast");


	string key = "slow";


	if (stringset.find(key) == stringset.end())
		cout<<"key not found"<<endl;
	else
	    cout<<"Key found"<<endl;
    key = "c++";
    if (stringset.find(key) == stringset.end())
		cout<<"key not found"<<endl;
	else
	    cout<<"Key found"<<endl;
	cout<<"All Elements:"<<endl;
	unordered_set<string>::iterator it;
	for (it = stringset.begin(); it != stringset.end(); it++)
		cout<<(*it)<<endl;

}
