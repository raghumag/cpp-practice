#include<iostream>
#include<bits/stdc++.h>
#include <string>


using namespace std;


void printPair(pair<int, string> p) 
{ 
    cout << "("
         << p.first << ", "
         << p.second << ") "; 
}


void Showstack(stack<pair<int, string> > s) 
{ 
    while (!s.empty()) { 
        printPair(s.top()); 
		int t1 = s.top().first;
        string s1 = s.top().second;
		cout<<"t1:"<<t1<<endl;
		cout<<"s1:"<<s1<<endl;
		
        s.pop(); 
    } 

    cout << '\n'; 
}


int main() 
{ 
    stack<<int, string>> s; 

    s.push({ 10, "RAGHU" }); 
    s.push({ 15, "TANYA" }); 
    s.push({ 1, "KUSHI" }); 
    s.push({ 5, "ARJUN" }); 
    s.push({ 7, "LAKSHMI" }); 

    cout << "Stack of Pairs: "; 
    Showstack(s); 

    cout << "\nSize of Stack of Pairs: "
         << s.size(); 
    cout << "\nTop of Stack of Pairs: "; 
    printPair(s.top()); 

    cout << "\n\nRemoving the top pair\n"; 
    s.pop(); 

    cout << "Current Stack of Pairs: "; 
    Showstack(s); 

    return 0; 
}
