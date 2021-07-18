#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;

	double result = 0;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	cout << num[0] << " " << num[n - 1];
	return 0;
}