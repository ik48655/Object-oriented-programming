#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool spaces(char a, char b) // Returns boolean value if characters next to each other are the same
{
	return ((isspace(a) && isspace(b)));
}

void correct_string(string str_no, string& str_yes)
{
	replace(str_no.begin(), str_no.end(), '\t', ' '); // Replaces tab ( 4 spaces ) with one space

	auto ip = unique(str_no.begin(), str_no.end(), spaces); // Removes duplicates
	int n = ip - str_no.begin();

	for (int i = 0; i < n; i++)
	{
		if (isspace(str_no[i]) && ispunct(str_no[i + 1])) // Checks for space and then punctuation 
		{
			str_yes.push_back(str_no[++i]); 
			if (isspace(str_no[i + 1]))
			{
				continue;
			}
			str_yes.push_back(' ');
		}
		else if (ispunct(str_no[i]) && isalpha(str_no[i + 1])) // Checks for punctuation and then alphabetic letter
		{
			str_yes.push_back(str_no[i]);
			str_yes.push_back(' ');
		}
		else {
			str_yes.push_back(str_no[i]);
		}
	}

}

int main()
{
	cout << "Please enter the sentence that you want to correct" << endl;
	string str;
	getline(cin, str);
	string strcorr = "";
	correct_string(str, strcorr);
	cout << strcorr;
}

