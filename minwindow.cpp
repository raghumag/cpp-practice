#include<iostream>
#include<vector>
#include<bits/stdc++.h> 
#include<string>
using namespace std;


class Solution {
    public:
        string minWindow(string s, string t) {
            if (s.length() < t.length())
                  return "";
            unordered_map<char, int> map;

            for (char& c: t){
				map[c]++;
			}
            int counter = map.size(); 
			int len = INT_MAX;
			int end = 0, begin = 0, head = 0;
			while (end < s.length()) {
				char c = s[end];
				if (map.find(c) != map.end()){
					map[c]--;
					if (map[c] == 0)
						counter--;
				}
				while (!counter) {
					char t = s[begin];
					if (map.find(t) != map.end())  {
						map[t]++;
					    if (map[t] > 0 )
						    counter++;
					} 
					if (end - begin < len) {
						len = end - begin;
						head = begin;
					}
				    begin++;
				}
			}
			if (len == INT_MAX)
				return "";
			return s.substr(head, head+len);
		}
};


int main()
{
	Solution sol;
	string str = "ABAACBAB";
	string t = "ABC";
	string tstr = sol.minWindow(str, t);
	cout<<"tstr:"<<tstr<<endl;
	return 0;
}
