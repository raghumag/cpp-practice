#include <iostream>
#include <vector>


using namespace std;


class Solution {
	public:
		int leastInterval(vector<char>& tasks, int n) {
			int mp[120]={0};
			int ma=0,c=0;
			for(int i=0;i<tasks.size();i++)
			{
				mp[tasks[i]]++;
				if(mp[tasks[i]]>ma)
				{
					ma=mp[tasks[i]];
					c=1;
				}
				else if(mp[tasks[i]]==ma)
				c++;
			}
			int ans=0;
			ans=c+(ma-1)*(n+1);
			int z=tasks.size();
			ans=max(ans,z);
			return ans;

	}
};


int main()
{
	Solution sol;
    vector<char> vec{'A','A','A','A','A','B','B', 'A', 'C', 'C', 'C', 'C', 'D', 'D', 'E', 'E', 'E', 'E', 'E', 'E', 'B','B', 'B', 'B', 'C', 'C', 'D', 'D', 'D', 'D', 'F', 'F', 'F', 'F', 'F', 'F'};
	int ans = sol.leastInterval(vec, 5);
	cout<<"ans:"<<ans<<endl;
}
