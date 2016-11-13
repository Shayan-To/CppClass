#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, r;

	cin >> n;
	
	if (n >= 0)
	{
		r = n * (n + 1) / 2;
	}
	else
	{
		r = -n * (n - 1) / 2;
	}

	cout << r << '\n';

	return 0;
}
