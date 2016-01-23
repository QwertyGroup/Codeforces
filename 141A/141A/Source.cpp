//CoodeForces Problem 141 A
//Веселая шутка

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string S1, S2, S3;
	cin >> S1;
	cin >> S2;
	cin >> S3;
	string sumS;

	sumS = S1 + S2;

	for (int i = 0; i + 1 < S3.size(); i++)
		for (int j = 0; j + i +1 < S3.size(); j++)
			if (int(S3[j]) > int(S3[j + 1]))
			{
				char T = S3[j];
				S3[j] = S3[j + 1];
				S3[j + 1] = T;
			}

	for (int i = 0; i + 1 < sumS.size(); i++)
		for (int j = 0; j + i +
			1 < sumS.size(); j++)
			if (int(sumS[j]) > int(sumS[j + 1]))
			{
				char T = sumS[j];
				sumS[j] = sumS[j + 1];
				sumS[j + 1] = T;
			}

	//sort(0, S3.length(), S3);

	if (sumS == S3) cout << "YES" << endl; else cout << "NO" << endl;


	//cout << S3 << ' ' << sumS << endl;

	//system("pause");
	return 0;
}