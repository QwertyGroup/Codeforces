/*CodeForces problem 510A
  Лиса и змейка*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
	int n, m;
	cin >> n >> m;

	string S1 = "", S2 = "#", S3 = "";

	for (int i = 0; i < m; i++)
		S1 += "#";

	for (int i = 1; i < m; i++)
		S2 += ".";
	for (int i = 0; i < m - 1; i++)
		S3 += ".";
	S3 += "#";

	bool right = true;
	for (int i = 0; i < n; i++)
		if (i % 2 == 0) cout << S1 << endl;
		else if (right) { cout << S3 << endl; right = false; }
		else { cout << S2 << endl; right = true; }

	//system("pause");
	return 0;
}