#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream, std::stringbuf

int main () {
	std::string str("Example String");
	  std::stringstream ss(str);
	   // ss.str ("Example string");
		  std::string s = ss.str();
		    std::cout << ss << '\n';
			  return 0;
}
