// mission415.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
	string addStrings(string num1, string num2) {

		string resultStr;

		int maxLen = max(num1.length(), num2.length());

		for (size_t i = 0; i < maxLen; i++)
		{
			if (num1.length() < maxLen)
			{

			}

			resultStr.insert(resultStr.begin(), 1);

		}

		//resultStr.insert(resultStr.begin(), '1');
		//resultStr.insert(resultStr.begin(), '2');
		cout << resultStr << endl;

		string::iterator p = num1.end();
		cout<< *(p - 1) << endl;

		return resultStr;
	}
};

int main()
{
	string num1("12345");
	string num2("535763");
	Solution *pObj = new Solution();
	pObj->addStrings(num1, num2);

	return 0;

    return 0;
}

