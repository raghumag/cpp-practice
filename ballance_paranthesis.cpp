#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
		bool checkValidString(string s) {
			stack<char> st;
			bool v = true;
			for (int i = 0; i < s.length(); i++) {
				switch(s[i]) {
					case '(':
						st.push(s[i]);
						continue;
					case ')':
						{
							if (!st.empty() && st.top() == ')') {
								v = false;
							    break;
							}
             			    st.pop();
						    continue;
						}
                    case '*':
						  continue;
				    default :
						  return false;
				}
			}
			if (st.empty() && v )
			    return true;
			else
				return false;
		}
};

int main()
{
	string str1 = "()";
	Solution sol;
	if (sol.checkValidString(str1))
		cout<<"Valid String"<<endl;
	else
		cout<<"Invalid String"<<endl;

	string str2 = "(*)";
	if (sol.checkValidString(str2))
		cout<<"Valid String"<<endl;
	else
		cout<<"Invalid String"<<endl;
	string str3 = "(*)(";
	if (sol.checkValidString(str3))
		cout<<"Valid String"<<endl;
	else
		cout<<"Invalid String"<<endl;
	string str4 = "(*))";
	if (sol.checkValidString(str4))
		cout<<"Valid String:"<<str4<<endl;
	else
		cout<<"Invalid String:"<<str4<<endl;
	return 0;

}
