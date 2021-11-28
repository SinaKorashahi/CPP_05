#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cout << "n:";
	cin >> n;
	cout << "m:";
	cin >> m;

	for (int i = 0; i < n; ++i)
	{
		cout << "\n";
		for (int j = 0; j < m; ++j)
			cout << i * j << "         ";
	}

	return 0;


}