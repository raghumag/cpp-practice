#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


class Solution {
	public:
		int levenstein (string str1, string str2) 
		{
			vector<vector<int>> edits(str2.length() + 1,
					vector<int>(str2.length()+1, 0));
			for (int i = 0; i < str1.length() + 1; i++)
			{
				for (int j = 0; j < str1.length() + 1; j++)
					edits[i][j] = j;
				edits[i][0] = i;
			}
            int r = 0, c = 0;
			for (r = 1; r < str2.length() + 1; r++) {
				for (c = 1; c < str1.length() + 1; c++) {
					if (str2[r - 1] == str2[c - 1])
						edits[r][c] = edits[r-1][c-1];
					else 
					{
						edits[r][c] = 1 + min(edits[r-1][c], min(edits[r][c-1],
								               edits[r-1][c-1]));
					}
				}
		    }
		    return edits[r-1][c-1];
		}
};


int main()
{
	Solution sol;
	cout<<"Levenstienc Algo:"<<sol.levenstein("abc","yabb")<<endl;
	return 0;
}
