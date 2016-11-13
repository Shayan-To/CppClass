#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, p, r;

	cin >> n;

	if (n >= 0)
	{
		p = n;
	}
	else
	{
		p = -n;
	}

	r = p * (p + 1) / 2;

	if (n < 0)
	{
		r = -r;
	}

	cout << r << '\n';

	return 0;
}
