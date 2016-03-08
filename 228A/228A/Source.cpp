/*CodeForces problem 228A
  Не смешите мои подковы*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector <int> A(4);
	cin >> A[0] >> A[1] >> A[2] >> A[3];

	f:
	for (int i = 0; i < A.size(); i++)
		for (int j = 0; j < A.size(); j++)
			if (i != j)
				if (A[i] == A[j])
				{
					A.erase(A.begin() + j);
					goto f;
				}
	cout << 4 - A.size();
	//system("pause");
	return 0;
}