#include<iostream>
#include<vector>


using namespace std;

class Solution {
	public:
		void spiral(vector<vector<int>> vec)
		{
		     int n = vec.size();
			 int m = vec[0].size();
			 int i = 0;
			 int j = 0;
			 int c = 0;
             int r = 0;
              while (i < n && j < m) {
				 while (j < m) { 
				 cout<<"vec["<<i<<"]"<<"["<<j<<"]:"<<vec[i][j]<<endl;
				 j++;
				 }
				 i++;j--;
				 while ( i < n) {
				     cout<<"vec["<<i<<"]"<<"["<<j<<"]:"<<vec[i][j]<<endl;
					 i++;
				 }
				 j--;i--;
                 while (j >= c) {
				     cout<<"vec["<<i<<"]"<<"["<<j<<"]:"<<vec[i][j]<<endl;
					 j--;
				 }
				 i--;j++; c++;
                 while ( i > r  ) {
				     cout<<"vec["<<i<<"]"<<"["<<j<<"]:"<<vec[i][j]<<endl;
					 i--;
				 }
				 r++;
				 i++;n--;
				 j++;m--;


			 }
		}
};


int main()
{
	Solution sol;
/*	vector<vector<int>> vec{ {0, 1,2, 3, 20},
		                     {4, 5, 6, 7, 21 },
							 {8, 9, 10, 11,22},
						     {12, 13, 14, 15, 23}, 
	                         {16, 17, 18, 19, 24}};*/
   vector<vector<int>> vec { {1, 2, 3, 4},
	                           {10, 11, 12, 5},
							   {9, 8, 7, 6}};
	sol.spiral(vec);
	return 0;
}
