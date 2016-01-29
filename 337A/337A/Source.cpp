/*CodeForces problem 337 A
  Пазлы*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector <int> A(m);
	for (int i = 0; i <= m - 1; i++)
		cin >> A[i];
	sort(A.begin(), A.end());
	int delta = 10000;
	int curdelta;
	for (int i = 0; i <= m - n; i++)
	{
		curdelta = A[i + n - 1 ] - A[i];
		if (curdelta < delta) delta = curdelta;
	}
	cout << delta;
	//system("pause");
	return 0;
}