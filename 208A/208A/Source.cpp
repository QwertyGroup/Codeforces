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
		S.insert(pos, ' ', 1);
	}
	cout << S;
	//system("pause");
	return 0;
}