/*CodeForces problem 469A
  I Wanna Be the Guy*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> ref(n);
	for (int i = 0; i < n; i++)
		ref[i] = i + 1;

	int p;
	cin >> p;
	vector <int> arr(p);
	//vector <int> arr;
	for (int i = 0; i < p; i++)
		cin >> arr[i];
	int q;
	cin >> q;
	arr.resize(p + q);
	for (int i = p; i < p + q; i++)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());

	int len = arr.size() - 1;
	for (int i = 0; i < len; i++)
		if (arr[i] == arr[i + 1]) { arr.erase(arr.begin() + i); i--; len--; }
	
	/*cout << endl;
	for (int i = 0; i < ref.size(); i++)
		cout << ref[i];
	cout << endl;
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i];
	system("pause");*/

	if (arr == ref) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";

	/*if (ref.size() > arr.size()) len = arr.size();
	else len = ref.size();

	for (int i = 0; i <= len; i++)
		if (ref[i] != arr[i]) { cout << "Oh, my keyboard!"; exit(0); }
	cout << "I become the guy.";*/
	return 0;
}