#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char text = i + 64;
        for (int j = 1; j <= i; j++){
            cout << text;
        }
        cout << endl;
    }
}