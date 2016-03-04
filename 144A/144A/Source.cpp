/*CodeForces problem 144 A
  Приезд генерала*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> A(n+1);
	for (int i = 1; i + 1 <= A.size(); i++)
		cin >> A[i];
	int max = 0;
	int min = 101;
	int nmax = 0;
	int nmin = 0;
	for (int i = 1; i + 1 <= A.size(); i++)
	{

	}
	
	cout << (n - nmin) + nmax;
	system("pause");
	return 0;
}