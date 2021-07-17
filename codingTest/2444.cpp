#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        for (int k = 1; k < num - i; k++) {
            cout << " ";
        }
        for (int j = 0; j < (i + 1) * 2 - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < num-1; i++) {
        for (int k = 0; k < i+1; k++) {
            cout << " ";
        }
        for (int j = 0; j < (num - i-1) * 2 - 1; j++) {
            cout << "*";
        }



        cout << endl;
    }
    return 0;
}