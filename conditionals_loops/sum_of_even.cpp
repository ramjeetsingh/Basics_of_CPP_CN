#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = 0;
    int i = 1;
    while (i <= n) {
        if (i%2 == 0) {
            s += i;
        }
        i += 1;
    }
    cout << s << endl;
}