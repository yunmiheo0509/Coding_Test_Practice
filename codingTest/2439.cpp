#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    int knum = num-1;

    for (int i = 0; i < num; i++) {
        for (int k = 0; k < knum; k++) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
            cout << endl;
            knum--;
    }
    return 0;
}