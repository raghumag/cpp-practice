#include<iostream>
#include<vector>
#include<bits/stdc++.h> 

using namespace std;


class Solution {
     bool isOutOfOrder(int i , int curr, vector<int> array) 
     {
         if (i == 0)
             return (curr > array[i + 1]);
         if (i == array.size() - 1)
              return (curr < array[i - 1]);
         return ( curr > array[i + 1] || curr < array[i - 1]);
    }

	public:
		vector<int> subarraySort(vector<int> array) 
		{
             int minOfOrder = INT_MAX;
             int maxOfOrder = INT_MIN;

             for (int i = 0; i < array.size(); i++){
                  int curr = array[i];
                  if (isOutOfOrder(i, curr, array)) {
                      minOfOrder = min(minOfOrder , curr);
                      maxOfOrder = max(maxOfOrder, curr);
                  }
             }
             if (minOfOrder  == INT_MIN)
                 return {-1, -1};

             int l = 0;
             while (minOfOrder >= array[l])
                 l++;
             int r = array.size() - 1;
             while (maxOfOrder <= array[r])
                    r--;
             return {l, r};
        }
};


int main()
{
	vector<int> vec{1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19};

	Solution sol;

	vector<int> ans = sol.subarraySort(vec);

	for (int i = 0; i < ans.size(); i++)
		cout<<ans[i]<<endl;
}
