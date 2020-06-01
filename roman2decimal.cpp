#include<iostream>

using namespace std;
class roman2decimal {
	public:
		int value (char c)
		{
			int v = -1;
			switch(c) {
				case 'I':
					v = 1;
				break;
				case 'V':
					v = 5;
				break;
				case 'X':
					v = 10;
				break;
				case 'L':
					v = 50;
				break;
				case 'C':
					v = 100;
				break;
				case 'D':
					v = 500;
				break;
				case 'M':
					v = 1000;
				break;
				default:
					v = -1;
			}
			return v;
		}
	int roman2dec(string &str)
	{
		int res = 0, i;
		for (i = 0; i < str.length(); i++) {
			int s1 = value(str[i]);
			if (s1 < 0)
				break;
			if (i+1 < str.length()) {
				int s2 = value(str[i+1]);
				if (s2 < 0)
					break;
				if (s1 >= s2)
					res = res + s1;
				else {
					res = res + s2 - s1;
					i++;
				}
			} else {
				res = res + s1;
			}
		}
		if (i < str.length())
			res = -1;
		return res;
	}
};

int main()
{
	roman2decimal r2d;
	string str = "IV";
	int dvalue = r2d.roman2dec(str);
	cout<<" "<<"decimal value of "<<str<<" is:"<<dvalue<<endl;
}

