/*CodeForces problem 82 A
  Double Cola*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string names[] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
	int n;
	cin >> n;

	int k = 1;
	while (k * 5 < n)
	{
		n -= k * 5;
		k *= 2;
	}

	cout << names[(n - 1) / k] << endl;

	return 0;
}