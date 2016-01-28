/*CodeForces problem 271 A
  Красивый год*/

#include <iostream>

using namespace std;

bool fCheck(int x);

int main()
{
	int y;
	cin >> y;
	y++;
	while (!fCheck(y)) y++;
	cout << y;
	//system("pause");
	return 0;
}

bool fCheck(int x)
{
	int n1, n2, n3, n4;
	n1 = x % 10;
	n2 = (x % 100) / 10;
	n3 = (x % 1000) / 100;
	n4 = x / 1000;
	if (n1 != n2 && n1 != n3 && n1 != n4 && n2 != n3 && n2 != n4 && n3 != n4) return true;
	else return false;
}