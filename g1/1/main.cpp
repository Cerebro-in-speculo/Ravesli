#include<iostream>
#include<string>

using namespace std;

bool isIcecreamSandwich(const string& s)
{
	if (s.length() >= 3)
	{
		char ch=s[0];
		int count = 0;

		for (const char &i : s)
		{
			if (i != ch)
			{
				++count;
				ch = i;
			}
		}
		
		if (count == 2)
		{
			for (int k = 0; k<s.length()/2; ++k)
			{
				if (s[k] !=s[s.length()-1-k])
					return false;
			}
			return true;
		}
		else
			return false;
	}
	else
	{
		return false;
	}
}

int main()
{
	cout << "Enter string: ";
	string s;
	cin >> s;

	cout << boolalpha<<isIcecreamSandwich(s) << endl;
	return 0;
}