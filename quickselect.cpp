#include <vector>
#include <iostream>
using namespace std;

int partition(vector<int> &array, int low, int high, int pIndex)
{
    int pivot = array[pIndex];
    while (low <= high) {
        if (array[low] > pivot && array[high] < pivot) {
            swap(array[low], array[high]); 
        } else if (array[low] <= pivot)
            low++;
        else if (array[high] >= pivot)
           high--;
    }
    swap(array[high], array[pIndex]);
    return high;
}
int quickselect(vector<int> array, int k) {
// Write your code here.
    int pIndex = 0;
    int low = 0;
    int high = array.size() - 1;
    int i = -1;
	k--;

    i = partition(array, low+1, high, pIndex);
    while (i != k) {

        if (i > k)
            i = partition(array, low+1, i -1, low);
        else 
            i = partition(array, i+2, high, i+1);
    }
    return array[i];
}


int main()
{
	//vector<int> array{8, 5, 2, 9, 7, 6, 3};
	vector<int> array{43, 24, 37};
	int k  = quickselect(array, 2);

	cout<<"K the element in array:"<<k<<endl;
}
