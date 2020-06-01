#include<iostream>
#include<cstdint>

using namespace std;


class Solution {
	public:
	uint32_t reverseBits(uint32_t n) {
		cout<<"n:"<<std::hex<<n<<endl;
		uint32_t i = 0;
		uint32_t j = sizeof(uint32_t)*8;
		uint32_t k = 1 << (j - 1);
		while ( i < j) {
			uint32_t bit1 = ((n & (1<<i))<< j - i -1);
			uint32_t bit2 = ((n & (k >> i)) >> j - i -1);
			cout<<"n:"<<std::hex<<bit2<<endl;
			uint32_t mask = ~((1<<i) | (k>>i));
			cout<<"n:"<<std::hex<<mask<<endl;
			cout<<"n:"<<std::hex<<(bit1|bit2)<<endl;
			n = n & mask;
			n = n | bit1 | bit2;
			i++;
			j--;
		}
		return n;
	}
};

int main()
{
	Solution sol;
    uint32_t x = 0x80000003;
	cout<<"Reverse bits"<<endl;
	cout<<sol.reverseBits(x)<<endl;
	return 0;
}
