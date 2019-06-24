#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int values;
	bool exitPlayer = false;
	vector<int>v;
	do
	{
		std::cout << "Enter values > 0: ";

		if (exitPlayer)
		{
			v.clear();
			cin.ignore(1);
			exitPlayer = false;
		}
		while (cin.peek() != '\n')
		{
			cin >> values;
			v.push_back(values);
		}
		for(const int&i:v)
		{
			if (i < 0)
			{
				std::cout << "Values having number < 0: " << i<< endl;
				exitPlayer = true;
				break;
			}
		}
	} while (exitPlayer);

	sort(begin(v), end(v));
	std::cout << "Min number = " << v[0] << endl;
	return 0;
}