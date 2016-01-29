/*CodeForces problem 451 A
  Игра с палочками*/

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	if (n*m % 2 == 0) cout << "Malvika";
	else cout << "Akshat";
	//system("pause");
	return 0;
}