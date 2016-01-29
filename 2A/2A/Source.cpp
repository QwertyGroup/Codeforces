/*CodeForces problem 2 A
  Победитель*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int n;
	map <string, int> members;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name;
		int num;
		cin >> name >> num;
		members.insert(pair < string, int >(name, num));
	}

	system("pause");
	return 0;
}