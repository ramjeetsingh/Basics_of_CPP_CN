#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1;
    while (a <= n) {
        int b = a;
        int printed = 1;


        while (printed <= a) {
            cout << b << " ";
            b += 1;
            printed += 1;
        }
        cout << endl;
        a += 1;
    }
}