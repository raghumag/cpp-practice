#include <iostream>
#include <vector>


using namespace std;


class Solution {
	public:
		vector<int> productExceptSelf(vector<int>& vec) 
		{
			vector<int> output(vec.size(), 1);
			for (int i = 1; i < vec.size(); i++) {
			     output[i] = output[i - 1] * vec[i -1];
			}
			int R = 1;
			for (int i = vec.size() - 1; i > 0; i--) {
			     R *= vec[i];
				 output[i-1] = output[i-1] * R;
			}
			return output;
		}
};


int main()
{
	Solution sol;
	vector<int> vec{4, 5, 1, 2, 8, 2};
	vector<int> output = sol.productExceptSelf(vec);
	cout<<"Output Array:"<<endl;
	for (int i = 0; i < output.size(); i++) 
		cout<<"output["<<i<<"]:"<<output[i]<<endl;
}
