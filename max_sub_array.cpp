#include <iostream>
#include <vector>
#include <climits>


using namespace std;

class Solution {
	public:
	vector<int> max_sub_array(vector<int> nums)
	{
		vector <int> ans;
		int max_so_far = INT_MIN;
		int max_end_here = 0;
        int s = 0, end = 0, start =0;
		for (int i = 0; i < nums.size(); i++) {
			max_end_here += nums[i];
			if (max_so_far < max_end_here) {
				max_so_far = max_end_here;
				start = s;
				end = i;
			}
			if (max_end_here < 0) {
				s = i + 1;
				max_end_here = 0;
			}
		}
		cout << "max sum is :"<<max_so_far<<endl;
		for (int i = start; i < end; i++) {
			cout<<" "<<nums[i];
			ans.push_back(nums[i]);
		}
		cout<<endl;

		return ans; 
	}
};

int main ()
{
	Solution sol;
	vector <int> nums{-2,1,-3,4,-1,2,1,-5,4};
	vector<int> ans = sol.max_sub_array(nums);
	return 0;
}
