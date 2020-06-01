#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
	vector<int> union_set(vector<int> &nums1, vector<int> &nums2) {
		vector<int> nums3;
		int num, i, j;
		for ( i = 0, j = 0; i < nums1.size() && j < nums2.size();){
	         if (nums1[i] < nums2[j]) {
				 num = nums1[i];
				 i++;
			 } else if (nums1[i] > nums2[j]) {
			     num = nums2[j];
				 j++;
		     } else {
				 num = nums2[j];
			     i++; j++;
			 }
			 if (std::find(nums3.begin(), nums3.end(), num) == nums3.end())
			     nums3.push_back(num);

		}
		while (j < nums2.size()) {
			 if (std::find(nums3.begin(), nums3.end(), nums2[j]) == nums3.end())
			     nums3.push_back(nums2[j]);
			j++;
		}
		
		while (i < nums1.size()) {
			 if (std::find(nums3.begin(), nums3.end(), nums1[i]) == nums3.end())
			     nums3.push_back(nums1[i]);
			i++;
		}
			

		return nums3;
	}
};



int main()
{
  vector<int> nums1{1,3,4,5};
  vector<int> nums2{2,4,6,8,9,10,11,12};
  Solution sol;
  vector<int> nums = sol.union_set(nums1, nums2);
  for (int i = 0; i < nums.size(); i++) 
	  cout<<nums[i]<<" ";
  cout<<endl;
}
