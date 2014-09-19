#include <vector>
using namespace std;

class Solution {
public:
	int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
		int totalGas = 0;
		int state = 0;
		int reslut = -1;
		for (size_t i = 0; i < gas.size(); i++)
		{
			totalGas += gas[i] - cost[i];
			state += gas[i] - cost[i];

			if (state < 0 )
			{
				state = 0;
				reslut = i;
			}

		}

		return totalGas < 0 ? -1 : reslut + 1;

	}
};