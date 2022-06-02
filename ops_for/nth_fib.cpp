#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fib_prev = 1;
    int fib_prev2 = 1;

    if (n == 1 || n == 2) {
        cout << 1;
    } else if (n == 3) {
        cout << 2;
    } else {
        for (int i = 4; i <= n; i++) {
            int temp = fib_prev;
            fib_prev += fib_prev2;
            fib_prev2 = temp;
        }
        cout << fib_prev2 + fib_prev;
    }
}