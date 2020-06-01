#include<iostream>
#include<string>
#include <bits/stdc++.h> 
#include<sstream>
using namespace std;
#if 0
class Solution {
public:
    string reverseWords(string s) {
        size_t st = 0, e = 0;
        reverse(s.begin(), s.end());
       for (auto i = s.begin(); i < s.end(); i++){
            e = s.find(' ', st);
			reverse(s.begin() + st, s.begin() + e);
			st = e+1;
            i += e;
            if (i >= s.end())
				reverse(s.begin() + st, s.end());

	   }
	   return s;
	}
};
#endif

class Solution {
	public:
		string reverseWords(string s) {
			vector<string> str;
			stringstream strs(s);
			cout<<strs<<endl;
			string word;
			while(strs>>word) {
				//cout<<word<<endl;
				str.push_back(word);
			}

			for(int i = str.size() - 2; i>=0; i--)
			{
				word.append(" ");
				word.append(str[i]);
			}
			s = word;
			return s;
		}
};
int main()
{
	Solution sol;
	string str1("the sky is blue");
	string str = sol.reverseWords(str1);
	cout<<"str:"<<str<<endl;
	return 0;
}
