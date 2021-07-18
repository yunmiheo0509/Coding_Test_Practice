#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num[7];
	int result=0;
	int count = 1;
	int min=0;
	for (int i = 0; i < 7; i++) {
		cin >> num[i];
	}
	sort(num, num + 7);

	for (int k = 0; k < 7; k++) {
		if (num[k] % 2 != 0) {
			result += num[k];
			if (count == 1) {
				min = num[k];
				count = -1;
			}
		}
	}
	if (count == 1) {
		cout << "-1" << endl;
	}
	else cout << result << endl << min;

	return 0;
}