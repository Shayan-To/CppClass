#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a = 1;
	
	while (true)
	{
		cin >> a;
		if (a == 0)
		{
			break;
		}
		cout << a * a << '\n';
	}

	return 0;
}
