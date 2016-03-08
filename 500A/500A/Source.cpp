/*CodeForces 500A
  Транспорт на Новый год*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	vector <int> A(100*n);
	for (int i = 1; i < n; i++)
		cin >> A[i];

	A[n] = 1;
	for (int i = 1; i <= n; i += A[i])
		if (i == t) { cout << "Yes"; exit(0); }
	cout << "NO";

	return 0;
}