#include<iostream>
#include<vector>


using namespace std;


class Solution {
	public:
		int findLengthOfLCIS(vector<int>& nums) {
			int max_len = 0;
			int k = 0, count = 1;
			if (nums.size())
				max_len = count;
			while (k+1 < nums.size()){
				if (nums[k] < nums[k+1]) {
					count++;
					k++;
				} else {
					if (max_len < count)
						max_len = count;
					    k++;
				}
			}
			return max_len;   
		}
};

int main()
{
	Solution sol;
	vector<int> vec{1, 3, 5, 4, 7};
	int count = sol.findLengthOfLCIS(vec);
	cout<<"count = "<<count<<endl;
}
