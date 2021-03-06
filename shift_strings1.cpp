#include<iostream>
#include<vector>
#include<string>

using namespace std;
class Solution {
	public:
		string stringShift(string s, vector<vector<int>>& shift) {
			int sh = 0;
			int len = s.length();
			for (int i = 0; i < shift.size(); i++) {
				if (shift[i][0]) 
					sh -= shift[i][1];
				else
					sh += shift[i][1];
			}
			sh %= len;
			if (sh > 0) {
                string str1 = s.substr(0, sh);
                string str2 = s.substr(sh);
                s = str2 + str1;
			} else {
				sh = -(sh);
				string str1 = s.substr(0, len - sh);
				string str2 = s.substr(len -sh , len);
				s = str2 + str1;
			}
			return s;
		}
};



int main()
{
	Solution sol;
	vector<vector<int>> vec {{1,8},{1,4},{1,3},{1,6},{0,6},{1,4},{0,2},{0,1}};
    string str = sol.stringShift("yisxjwry", vec);
	cout<<"string:"<<str<<endl;
    return 0;
}
