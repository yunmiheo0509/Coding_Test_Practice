#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	
	double result=0;
	cin >> n;
	vector<double> score(n);
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	sort(score.begin(), score.end());

	int max = score[n-1];

	for (int i = 0; i < n; i++) {
		result += (double)score[i] / max * 100;

	}
	cout << (double)result/n<< endl;

	return 0;
}