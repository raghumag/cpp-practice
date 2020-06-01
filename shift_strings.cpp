#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Solution {
    public:
        string stringShift(string s, vector<vector<int>>& shift) {
			int len = s.length();
            for (int i = 0; i < shift.size(); i++) {
                 if (shift[i][0]) {
					 //Right Shift
					 string tstr1 = s.substr(len - shift[i][1]);
					 string tstr2 = s.substr(0, len-shift[i][1]);
					 s = tstr1 + tstr2;
				 } else {
					 //Left Shift
					 string tstr1 = s.substr(0, shift[i][1]);
					 string tstr2 = s.substr(shift[i][1]);
					 s = tstr2 + tstr1;
				 }
			}
			return s;
        }
};

int main () 
{
	Solution sol;
	vector<vector<int>> vec{ {1,1},{1,1}, {0,2},{1,3}};
	string str = sol.stringShift("abcdefg", vec);
	cout<<"string:"<<str<<endl;
	return 0;
}
