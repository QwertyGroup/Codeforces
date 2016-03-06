/*CodeForces problem 580 A
  Кефа и первые шаги*/

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

	int max = 0; //max length
	int curmax = 0;
	int curnum;
	bool streak = false;
	for (int i = 0; i < n; i++)
	{
		if (!streak) { curnum = A[i]; streak = true; }
		if (A[i] >= curnum) { curmax++; curnum = A[i]; }
		else { streak = false; if (max < curmax) max = curmax; curmax = 0; i--; }
	}
	if (max < curmax) max = curmax;

	cout << max;
	//system("pause");
	return 0;
}