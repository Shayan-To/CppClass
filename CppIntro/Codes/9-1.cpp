#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a = 1;
	
	while (a != 0)
	{
		cin >> a;
		if (a != 0)
		{
			cout << a * a << '\n';
		}
	}

	return 0;
}
