/*CodeForces porblem 344 A
Магниты*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <string> S(n);
	for (int i = 0; i < n; i++)
		cin >> S[i];

	int counter = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (S[i] != S[i + 1]) counter++;
	}

	cout << counter << endl;
	//system("pause");
	return 0;
}