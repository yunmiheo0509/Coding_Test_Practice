#include <iostream>
using namespace std;
int main() {
	int arr[9];
	int n, temp;
	n = 0;
	temp = arr[0];
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 9; i++) {
		if (arr[i] > temp) {
			n = i;
			temp = arr[i];
		}
	}
	cout << temp << endl << n+1;
	

	return 0;
}