// mission6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	string convert(string s, int numRows) {

		string resultStr;

		for (size_t i = 0; i < numRows; i++)
		{
			for (size_t j = 0; j < s.length(); )
			{
				resultStr.push_back(s.at(j));
				j = j + numRows + 1;
			}
		}

		return resultStr;

	}
};

int main()
{
	string subString("eafaefabcbafg");
	Solution *pObj = new Solution();
	pObj->convert(subString, 3);

	return 0;
}

