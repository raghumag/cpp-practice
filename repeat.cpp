#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


class Solution {
	public:
	vector<int> findrepeats(vector<int>& nums)
	{
		vector<int> ans;
		unordered_set<int> us;
		for (int i = 0; i < nums.size(); i++) {
			if (us.find(nums[i]) == us.end())
				us.insert(nums[i]);
			else
				ans.push_back(nums[i]);
		}
		return ans;
	}
};

int main()
{
	vector<int> vec{0, 4, 3, 2, 7, 8, 2, 3, 1};
	Solution sol;
	vector<int> ans = sol.findrepeats(vec);
	for (int i = 0; i < ans.size(); i++)
		cout<<ans[i]<<endl;
//cout<<"ans["<<i<<"]"<<ans[i]<<endl;
	return 0;
}


