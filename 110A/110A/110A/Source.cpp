/*CodeForces problem 110 A
  Почти счастливое число*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	cin >> S;
	int counter = 0;
	for (int i = 0; i <= S.length(); i++)
		if (S[i] == '4' || S[i] == '7') counter++;
	if (counter == 4 || counter == 7) cout << "YES";
	else cout << "NO";
	//system("pause");
	return 0;
}