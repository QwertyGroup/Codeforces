/*CodeForces porblem 546 A 
  Солдат и бананы*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, n, w;
	cin >> k >> n >> w;
	int i;
	for (i = 1; i < w; i++);
		n -= k*i;
	cout << n;
	system("pause");
	return 0;
}