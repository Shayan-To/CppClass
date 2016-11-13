#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int i, t, n;
	
	cin >> n;
	
	i = 0;
	while (i < n)
	{
		cin >> t;
		v.push_back(t);
		i = i + 1;
	}

	i = v.size() - 1;
	while (i >= 0)
	{
		cout << v[i] << '\n';
		i = i - 1;
	}

	return 0;
}
