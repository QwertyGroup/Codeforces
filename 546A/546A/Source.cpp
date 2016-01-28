/*CodeForces porblem 546 A 
  Солдат и бананы*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, n, w; //price, money, amount
	cin >> k >> n >> w;
	int price = 0;
	for (int i = 1; i <= w; i++)
		price += i*k;
	if (n >= price) cout << 0;
	else cout << price - n;
	//system("pause");
	return 0;
}