#include<iostream>
#include<vector>

using namespace std;
class Solution {
	public:
	void print_spiral(vector<vector<int>> nums)
	{
		size_t n = nums.size();
		size_t m = nums[0].size();
        int k = 0 , l = 0;

		while (k < m && l < n) {
		    for (int i = l; i < n; i++)
			   cout<<" "<< nums[k][i];
			k++;
		    for(int i = k; i < n; i++)
			   cout<<" "<<nums[i][n-1];
		    n--;
		    if (k < m)
			{
				for (int i = n - 1;i >= l; --i)
					cout<<" "<<nums[m - 1][i];
				m--;
			}
			if (l < n) {
				for (int i = m - 1; i >= k; --i)
					cout<<" "<<nums[i][l];
				l++;
			}
		}
		cout<<endl;
	}
};


int main()
{
	Solution sol;
	vector<vector<int>> nums = { {1, 2, 3, 4}, 
		                         {5, 6, 7, 8}, 
								 {9, 10, 11, 12},
		                         {13, 14, 15, 16}};
	sol.print_spiral(nums);
	return 0;
}
