#include<iostream>
#include<vector>
#include<unordered_set>


using namespace std;

class Solution {
	public:
		int countElements(vector<int>& arr) {
			unordered_set<int> us;
			int count = 0;
			for (int i = 0; i < arr.size(); i++)
				us.insert(arr[i]);
			for (int i = 0; i < arr.size(); i++) {
				if (us.find(arr[i] + 1) != us.end())
					count++;
			}
			return count;
		}
};



int main()
{
	Solution sol;
//	vector<int> vec{1,2,3};
//	vector<int> vec{1,1,3,3,5,5,7,7};
//	vector<int> vec{1,3,2,3,5,0};
    vector<int> vec{1,1,2,2};
	int count = sol.countElements(vec);
	cout<<"Number of Elements:"<<count<<endl;
	return 0;
}
