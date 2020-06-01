#include<iostream>
#include<vector>

using namespace std;

class Solution {
	public:
    bool isMonotonic(vector<int> array) {
        int i = 0;
        int j = array.size() - 1;
        if (i!=j && array[i] == array[j])
            return false;
        if (array[i] < array[j]) {
            while (i < (j -1 )) {
                if (array[i] <= array[i +1])
                    i++;
                else 
                    return false;
            }
        } else {
            while (i < (j -1 )) {
                if (array[i] >= array[i+1])
                    i++;
                else
                    return false;
            }
        }
        return true;
   }
};


int main()
{
	Solution Sol;
	vector<int> vec = { 1, 5, 10, 1100, 1101, 1102, 9001};

	bool flag = Sol.isMonotonic(vec);
	cout<<"flag:"<<flag<<endl;
	return 0;
}
