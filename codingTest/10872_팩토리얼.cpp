#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int result = 1;
	int num = n;
	for (int i = 0; i < n; i++) {
		result *= num--;
	}
	cout << result;
	return 0;
}