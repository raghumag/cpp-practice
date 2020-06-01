#include <bits/stdc++.h>
#include <stack>
#include <array>

using namespace std; 

void showstack(stack <int> s) 
{ 
	while (!s.empty()) 
	{ 
		cout << '\t' << s.top(); 
		s.pop(); 
	} 
	cout << '\n'; 
} 

int main () 
{ 
	stack<array<int,2>> s; 
	s.push({10,20}); 
	s.push({30,40}); 
	s.push({20,50}); 
	s.push({5,6}); 
	s.push({1,2}); 

	cout << "The stack is : "; 
	//showstack(s); 

	cout << "\ns.size() : " << s.size(); 
	array<int,2> weight = s.top();
	int data = s.top()[1];
//	cout << "\ns.top() : " << s.top();  
    cout<<"w[0]:"<<weight[0]<<"w[1]"<<weight[1]<<endl; 

	cout<<"data:"<<data;

	cout << "\ns.pop() : "; 
	s.pop(); 
	//showstack(s); 

	return 0; 
} 
