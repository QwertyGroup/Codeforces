/*CodeForces problem 268A 
  �����*/

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
	for (int i = 0; i < n; i++) //����� ������ �������
		for (int j = 0; j < n; j++) //��� ������ �� ����� ����������
			if (i != j) //�� �� ���� � �����
				if (InF[i] == OutF[j]) counter++; // ����� ������ ���� == ����� ������ �����

	cout << counter;
	//system("pause");
	return 0;	
}