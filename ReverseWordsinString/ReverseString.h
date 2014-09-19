#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    void reverseWords(string &s) {

		string::iterator itor = s.begin();
		vector <string> v;
		string temp = "";

		while(itor != s.end())
		{
		
			if ((*itor) == ' ')
			{
				if (temp !="")
				{
					v.insert(v.begin(),temp);
				}
				

				/*if(temp != ""){
					v.insert(v.begin()," ");
				}*/

				temp.clear();
				itor++;
			}

			else{

				temp += (*itor);
				itor++;
			}
		}

		if (temp !="")
		{
			v.insert(v.begin(),temp);
		}
		

		s.clear();

		for (vector<string>::iterator itor1 = v.begin(); itor1 != v.end(); itor1++)
		{
			s += (*itor1)+" "; 
		}
        
		s = s.substr(0,s.length()-1);
		//cout << &s <<endl;
    }
};