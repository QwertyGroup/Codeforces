/*CodeForces proble 58A
  зрђ*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	string hello = "hello";
	cin >> S;
	if (S.find(hello[0]) == string::npos || S.find(hello[1]) == string::npos || S.find(hello[2]) == string::npos ||
		S.find(hello[3]) == string::npos || S.find(hello[4]) == string::npos)
	{
		cout << "NO";
		//system("pause");
		exit(0);
	}
	int h = S.find(hello[0]);
	int e = S.find(hello[1], h + 1);
	int l1 = S.find(hello[2], e + 1);
	int l2 = S.find(hello[3], l1 + 1);
	int o = S.find(hello[4], l2 + 1);

	if (h < e && e < l1 && l1 < l2 && l2 < o) cout << "YES";
	else cout << "NO";
	//system("pause");
	return 0;
}