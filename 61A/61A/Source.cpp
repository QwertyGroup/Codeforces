/*CodeForces problem 61A
  Быстрый математик*/

#include <iostream>
#include<string>

using namespace std;

int main()
{
	string S1, S2, S3;
	cin >> S1;
	cin >> S2;
	S3 = "";
	for (int i = 0; i < S1.length(); i++)
		if (S1[i] == S2[i]) S3 += "0";
		else S3 += "1";
	cout << S3;
	//system("pause");
	return 0;
}