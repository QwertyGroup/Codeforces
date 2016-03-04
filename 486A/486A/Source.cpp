/*CodeForces problem 486 A
  Подсчёт функции*/

#include <iostream>

using namespace std;

int main()
{
	long long int n;
	cin >> n;
	if (n % 2 == 0) cout << n / 2;
	else cout << -(n + 1) / 2;
	//system("pause");
	return 0;
}