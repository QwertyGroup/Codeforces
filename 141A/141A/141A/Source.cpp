#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S1, S2, S3;
	cin >> S1;
	cin >> S2;
	cin >> S3;
	
	if (S1.length() + S2.length() == S3.length())cout << "YES";
	else cout << "NO";
	//system("pause");

	return 0;
}