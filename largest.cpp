#include<iostream>
#include<vector>
#include<bits/stdc++.h> 

using namespace std;


class Solution {
	public:
     vector<int> largestRange(vector<int> array)
     {
		 sort(array.begin(), array.end());
		 int start = 0;
		 int curr_r = 0;
		 int max_r = INT_MIN;
		 int curr_start = 0;
		 int curr_end  = 0;
		 for (int i = 0; i < array.size() - 1; i++) {
			 if (array[i] + 1 == array[i+1] || array[i] == array[i+1])
				 curr_r++;
			 else {
				 if (max_r < curr_r) {
					 max_r = curr_r;
					 curr_start = start;
					 curr_end = i;
					 start = i + 1;
					 curr_r = 0;
				 }
			 }
		 }
		 if (curr_r > max_r) {
			 curr_start = start;
			 curr_end = array.size() - 1;
         }
		 if ((curr_r == array.size() - 1) && max_r == INT_MIN)
			 		  return vector<int>{array[0], array[curr_r]};
		 return vector<int>{array[curr_start], array[curr_end]};
			
     }
};

int main()
{
//	vector<int> vec{0, 9, 19, -1, 18, 17, 2, 10, 3, 12, 5, 16, 4, 11, 8, 7, 6, 15, 12,12, 2,1, 6, 13, 14};
//	vector<int> vec{1, 2, 3, 4};
///	vector<int> vec{1, 1};
    vector<int> vec{8, 4, 2, 10, 3, 6, 7, 9, 1};
	Solution sol;
	vector<int> ans = sol.largestRange(vec);
	for (int i = 0; i < ans.size(); i++)
		 cout<<ans[i]<<endl;
    return 0;	 
}
