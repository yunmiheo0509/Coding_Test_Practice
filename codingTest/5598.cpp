#include <iostream>
#include <string>
using namespace std;

int main() {
	string caesar,result;
	cin >> caesar;
	for (int i = 0; i < caesar.length(); i++) {
		if (caesar[i] == 'A' || caesar[i] == 'B' || caesar[i] == 'C') {
			int a = (int)caesar[i] +23;
			result= (char)a;
			cout << result;
		}
		else {
			int b = (int)caesar[i] - 3;
			result = (char)b;
			cout << result;
		}
	}
	return 0;
}