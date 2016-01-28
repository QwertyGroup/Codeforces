/*CodeForces 472A
  Уроки дизайна задач: учимся у математики*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int x;
	if (n % 2 == 0) x = 4;
	else x = 9;
	cout << x << ' ' << n - x;
	//system("pause");
	return 0;
}