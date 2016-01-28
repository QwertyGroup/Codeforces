/*CodeForces problem 41 A
  Перевод*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S1, S2;
	cin >> S1;
	cin >> S2;

	if (S1.length() != S2.length())
	{
		cout << "NO";
		exit(0);
	}

	bool check = true;
	for (int i = 0; i < S1.length(); i++)
		if (S1[i] != S2[S1.length() - i - 1]) { check = false; break; }
	
	
	if (check) cout << "YES";
	else cout << "NO";
	//system("pause");
	return 0;
}
