/*CodeForces problem 144 A
  Приезд генерала*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> A(n);
	for (int i = 0; i < n; i++)
		cin >> A[i];

	int min = 101, max = 0, nmin, nmax;
	
	for (int i = 0; i < n; i++)
	{
		if (max < A[i]) { max = A[i]; nmax = i; }
	}

	for (int i = n - 1; i >= 0; i--)
	{
		if (min > A[i]) { min = A[i]; nmin = i; }
	}

	//nmin++; nmax++;
	int time;
	if (nmax > nmin) time = nmax + (n - nmin - 2);
	else time = nmax + (n - nmin - 1);

	//cout << "MINPOS: " << nmin << " MAXPOS: " << nmax << endl;
	cout << time << endl;
	//system("pause");
	return 0;
}