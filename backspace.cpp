#include<iostream>
#include<stack>


using namespace std;


class Solution {
	public:
		bool backspace(string S, string T)
		{
			return (build(S) == build(T));
		}
		string build(string S)
		{
			stack<char> ans;
			for(int i = 0; i < S.length(); i++)
			{
				if (S[i] != '#')
					ans.push(S[i]);
				else
					ans.pop();
			}
			string s;
			while (!ans.empty()) {
			       s+=ans.top();
				   ans.pop();
			}
			return s;
		}
};


int main()
{
	Solution sol;
	string S1 = "tc#a", S2 = "td##a";
	string str1 = sol.build(S1);
	string str2 = sol.build(S2);
	cout<<"string:"<<str1<<endl;
	cout<<"string:"<<str2<<endl;
	if (sol.backspace(S1, S2))
	    cout<<"two strings are equal"<<endl;
	else
		cout<<"two strings are not equal"<<endl;
	return 0;
}
