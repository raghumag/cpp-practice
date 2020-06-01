#include<iostream>
#include<vector>

using namespace std;
class Solution {
	private:
		void permute(string s, int l, int r, vector<string>& vec)
		{
			if (l == r)
				vec.push_back(s);
			else {
				for (int i = l;  i <= r; i++) {
					swap(s[l], s[i]);
					permute(s, l+1, r, vec);
					swap(s[l],s[i]);
				}
			}
				
		}
	public:
		vector<string> permutation(string str)
		{
			vector<string> strs;
			permute(str, 0, str.length() - 1, strs);
			return strs;
		}
};



int main()
{
	Solution sol;
    string str = "ABC";
	vector<string> strs = sol.permutation(str);
	for (int i = 0; i < strs.size(); i++)
	{
		cout<<strs[i]<<endl;
	}

	
}

