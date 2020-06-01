#include<iostream>
#include<map>
#include<vector>

using namespace std;


class Solution {
	public:
		int findMaxLength(vector<int>& nums) {
			map<int, int> m;
			map<int, int>::iterator it;
			m.insert({0, -1});

			int max_len = 0, count = 0;
			for (int i = 0; i < nums.size(); i++) {
			    count = count + (!nums[i]? -1 : 1);
				it = m.find(count);
				if (it != m.end())
					max_len = max(max_len, i - it->second);
				else 
					m.insert({count, i});
			}
			return max_len;
		}
};

int main()
{
	Solution sol;
	vector<int> vec{0, 0, 1, 0, 0, 0, 1, 1};
	int max_len = sol.findMaxLength(vec);
	cout<<"max_len:"<<max_len<<endl;
}
