/*CodeForces problem 443A
  Антон и буквы*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	

	vector <char> S(100000);

	char c =' ';
	int i = 0;
	while (c != '}')
	{
		cin >> c;
		if (c != '{' && c != ',' && c != ' ' && c != '}')
		{
			S[i] = c;
			i++;
		}
	}

	S.resize(i);
	sort(S.begin(), S.end());

	int counter = 0;
	int cur;
	bool streak = false;
	for (int i = 0; i < S.size(); i++)
	{
		if (!streak) { streak = true; cur = S[i]; counter++; }
		if (cur != S[i]) { streak = false; i--; }
	}
		
	cout << counter;
	//system("pause");
	return 0;
}