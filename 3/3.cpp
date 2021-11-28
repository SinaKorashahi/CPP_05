#include<iostream>

using namespace std;

int main()
{
	int i, j, n, m;
	cout << "n:";
	cin >> n;
	cout << "m:";
	cin >> m;

	for (i = 0; i < n; ++i)
	{
		cout << "\n";
		for (j = 0; j < m; ++j)
			cout << i * j << "  ";
	}

	return 0;
}