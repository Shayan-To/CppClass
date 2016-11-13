#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a = 1;

	cin >> a;
	
	while (a != 0)
	{
		cout << a * a << '\n';
		cin >> a;
	}

	return 0;
}
