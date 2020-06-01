#include <iostream>

using namespace std;

class int2roman {
public:
    string intToRoman(int num) {
	    int arr[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	    string s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	    string ans;
	    for (int i=0;num!=0;i++)
	    {
	        while (num>=arr[i])
	        {
	            num-=arr[i];
	            ans+=s[i];
	        }
	    }
	    return ans;
    }
};


int main()
{
	int2roman i2r;
	string str = i2r.intToRoman(74);
	cout <<"str:"<<str<<endl;
}
