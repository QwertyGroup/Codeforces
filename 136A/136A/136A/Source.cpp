/*CodeForces problem 136 A
  Подарки*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> A(n+1);
	for (int i = 1; i < A.size(); i++)
	{
		int temp;
		cin >> temp;
		A[temp] = i;
	}
	for (int i = 1; i < A.size(); i++)
		cout << A[i] << ' ';
	//system("pause");
	return 0;
}