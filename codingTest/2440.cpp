#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int count = num;
    for (int i = 0; i < num; i++) {
        for (int j = count; j > 0; j--) {
            cout << "*";
        }cout << endl;
        count--;
    }
    return 0;
}