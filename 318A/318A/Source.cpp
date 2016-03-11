/*CodeForces problem 318A
  Чет и нечет*/

#include <iostream>

typedef long long int lli;

using namespace std;

int main() // 1+2^i; 2^i; 1 2 3 4 5; 1 3 5 2 4
{
	lli n, k;
	cin >> n >> k;
	
	lli ndiv2;
	if (n % 2 == 0) ndiv2 = n / 2;
	else ndiv2 = (n / 2) + 1;

	if (k <= ndiv2) cout << 2 * (k - 1) + 1;
	else cout << 2 * (k - ndiv2);

	//system("pause");
	return 0;
}