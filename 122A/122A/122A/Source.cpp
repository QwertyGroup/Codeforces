/*CodeForces problem 122 A 
  —частливое деление*/

#include <iostream>

using namespace std;

int main()
{
	const int k = 14;
	int Array[k] = { 4,7,44,47,74,77,444,447,474,477,744,747,774,777 };
	int n;
	cin >> n;
	for (int i = 0; i <= k; i++)
		if (n % Array[i] == 0)
		{
			cout << "YES";
			//system("pause");
			exit(0);

		}
	cout << "NO";
	//system("pause");
	return 0;
}