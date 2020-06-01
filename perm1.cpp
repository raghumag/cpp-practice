#include <bits/stdc++.h> 
using namespace std; 


vector<string> vec;
void permute(string a, int l, int r)  
{  


     if (l == r) {
		 cout<<"P:"<<a<<endl;
		 vec.push_back(a);
	 }	 
	 else
	 { 
		 for (int i = l; i <= r; i++)  
		 {  
			  // Swapping done  
              swap(a[l], a[i]);  
              permute(a, l+1, r);  

              //backtrack  
			  swap(a[l], a[i]);  
		 }  
	 }  
}  





int main()  
{  
    string str = "ABC";  
    int n = str.size();
    vector<string> st;	
    permute(str, 0, n-1); 
    cout<<"Permutations"<<endl;	
	for (int i = 0; i < vec.size(); i++)
		cout<<vec[i]<<endl;
    return 0;  
} 
