#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    unordered_set<int> os; 
    os.insert(5); 
    os.insert(1); 
    os.insert(6); 
    os.insert(3); 
    os.insert(7); 
    os.insert(2);
    os.insert(2);
    os.insert(2);
    os.insert(2);
    os.insert(2);

    set<int> s;
    s.insert(5); 
    s.insert(1); 
    s.insert(6); 
    s.insert(6); 
    s.insert(6); 
    s.insert(6); 
    s.insert(6); 
    s.insert(6); 
    s.insert(3); 
    s.insert(7); 
    s.insert(2);

    cout << "Elements of unordered_set: \n"; 
    for (auto it : s) 
         cout << it << " "; 
    cout <<endl;
    for (auto it : os) 
         cout << it << " "; 
    cout <<endl;

return 0; 
} 
