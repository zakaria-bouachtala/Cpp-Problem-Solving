#include "reverse_string.h"
#include <iostream>
#include <string>

using namespace std;

namespace reverse_string1 {
	
	string reverse_string(string input_str)
	{
		int length = input_str.length();
		string output_str(length,' ');
		for (int i = 0; i < length; i++)
		{
			output_str[i] = input_str[length - i - 1];
		}
		return output_str;
	}

}  // namespace reverse_string
