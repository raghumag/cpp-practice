#include<iostream>
#include<vector>

using namespace std;

class Solution {
	public:
		int minRewards(vector<int> scores) {
            int left = 1;
	        int right = scores.size() - 2;
		    int minr = scores.size();
			int lastInc = 0;
		    while (left < scores.size() - 1) {
				 if (scores[left - 1] < scores[left]) {
					 lastInc += 1;
					 minr += lastInc;
				 }
				 left++;
			}
			lastInc = 0;
			while (right >= 0) {
				if (scores[right] > scores[right +1]) {
					lastInc +=1;
					minr += lastInc;
				}
				right--;
			}
		    return minr;
		}
};


int main()
{
	vector<int> scores{8, 4, 2, 1, 3, 6, 7, 9, 5};
	Solution sol;
	int minr = sol.minRewards(scores);
	cout<<"Min Rewards"<<minr<<endl;
}
