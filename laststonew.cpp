#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
	int lastStoneWeight(vector<int>& stones) {
		make_heap(stones.begin(), stones.end());
		int i = 0, k;
		while(stones.size() > 1){
			int x = stones.front();
			pop_heap(stones.begin(), stones.end());
			stones.pop_back();
			int y = stones.front();
			pop_heap(stones.begin(), stones.end());
          	stones.pop_back();
			if (x == y) {
			    continue;
			} else {
				int d = x - y;
				stones.push_back(d);
				push_heap(stones.begin(), stones.end());
			}
		}
		if (stones.size() == 1)
			return stones[0];
		else
			return 0;
	}
};

int main()
{
	vector<int> vec{2, 7, 4, 1, 8, 1};
    Solution sol;
    int weight = sol.lastStoneWeight(vec);
	cout<<"Weight:"<<weight<<endl;
}

