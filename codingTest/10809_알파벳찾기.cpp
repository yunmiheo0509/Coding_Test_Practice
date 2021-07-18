#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count;
	char z='z';
	cin >> s;

	for (char a ='a'; a <= z; a++) {
		count = 0;
		for (char c : s) {
			if (a == c) {
				cout << count;
				break;
			}
			count++;
			if (count == s.length()) {
				cout << "-1";
			}
		}
		cout << " ";
	}

	return 0;
}