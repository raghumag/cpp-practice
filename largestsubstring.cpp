#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


class Solution {
    public:
	string longestsubstring(string str)
	{
		int sindex = 0, eindex = 0;
		
		int i = 0, j = 0, ans = INT_MIN;
		vector<int> index{128, 0};

		for (i = 0; i < str.length(); i++)
		{
			j = max(j, index[str[i]]);
			if ( ans < i +1 - j){
				ans = i +1 -j;
				sindex = j;
				eindex = i;
			}
			index[str[i]]= i+1;
		}
		return str.substr(sindex, eindex - sindex);
	}
};



int main()
{
	Solution sol;
	string str = "abcdefabc";
	cout<<"Longest Sub string of "<<str<<" is :"<<sol.longestsubstring(str)<<endl;
	return 0;
}
