#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
	int fib_r(int n) {
       int result = 0;
	   if (n == 1 || n == 2)
		   return 1;
	   else
		   result =  (fib_r(n - 1) + fib_r(n-2));
	   return result;
	}
	int fib_d(int n)
	{
		 
	    vector<int> mem(n+1, 0);
		return fib_dd(n, mem);
	}
	int fib_dd(int n, vector<int>& vec)
	{   
		int result = 0;
		if (n - 1 == 0)
		cout<<"n:"<<n<<endl;
		if (vec[n] != 0)
			return vec[n];
		if (n == 1 || n == 2)
			result = 1;
		else {
			result = fib_dd(n - 1, vec) + fib_dd(n - 2, vec);
			vec[n] = result;
		}
		return result;
	}
};



int main()
{
	Solution sol;
	int i = 10;
	cout<<"fib("<<i<<")"<<sol.fib_r(i)<<endl;
	cout<<"fib("<<i<<")"<<sol.fib_d(i)<<endl;
	return 0;
}
