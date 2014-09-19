#include <iostream>
#include <sstream>
#include <ctype.h>
using namespace std;

class Solution {
public:
    void reverseWords(string &s) {

        istringstream stream(s);

		string temp,str;
		while(stream >> temp){

			temp += " ";
			temp += str;
			str = temp;
		}

		s = str.substr(0,str.length()-1);

    }
};