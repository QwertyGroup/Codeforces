/*CodeForces problem 208 A
  Дабстеп*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	cin >> S;
	for (int i = 0; i <= S.length(); i++)
	{
		int pos;
		if (S.find("WUB") != string::npos)
			pos = S.find("WUB");
		else break;
		S.erase(pos,3);
		S.insert(pos," ");
	}
	
	while (S[0] == ' ')
		S.erase(0, 1);

	int i = S.length() - 1;
	while (S[i] == ' ')
	{
		S.erase(i, 1);
		i--;
	}

	for (int i = 0; i < S.length(); i++)
		if (S.find("  ") != string::npos)
			S.erase(S.find("  "),1);

	cout << S;
	//system("pause");
	return 0;
}