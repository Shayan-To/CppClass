#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(2);
	v.push_back(3);
	v.pop_back();
	v.push_back(4);
	v.push_back(5);

	v[2] = v[0] * 7;

	cout << v.size() << '\n';
	cout << v[2] << '\n';

	return 0;
}
