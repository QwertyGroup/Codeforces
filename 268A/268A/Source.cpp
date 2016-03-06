/*CodeForces problem 268A 
  Матчи*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> InF(n);
	vector <int> OutF(n);
	for (int i = 0; i < n; i++)
		cin >> InF[i] >> OutF[i];

	int counter = 0;
	for (int i = 0; i < n; i++) //берем каждую команду
		for (int j = 0; j < n; j++) //она играет со всеми остальными
			if (i != j) //но не сама с собой
				if (InF[i] == OutF[j]) counter++; // форма приема итой == форме выезда житой

	cout << counter;
	//system("pause");
	return 0;	
}