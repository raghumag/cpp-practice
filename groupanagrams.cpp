#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;


class Solution {
	public:
		vector<vector<string>> groupAnagrams(vector<string>& strs) {
			unordered_map<string,vector<string>> m;
			for(string s : strs) {
				string s1 = s;
				sort(s1.begin(),s1.end());
				m[s1].push_back(s);
			}

			vector<vector<string>> ans;
			for(auto it = m.begin();it!=m.end();it++) {
				vector<string> cur;
				for(string s : it->second) {
					cur.push_back(s);
				}
				ans.push_back(cur);
			}
			return ans;
		}
};


int main()
{
	Solution sol;
	vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
	vector<vector<string>> str = sol.groupAnagrams(strs);
	for (int i = 0; i < str.size(); i++) {
	    for (auto s:str[i])
		     cout<<s<<endl;
	}
}
