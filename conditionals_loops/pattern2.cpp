#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int spaces_left = n-i+1;
        while (spaces_left > 0) {
            cout << " ";
            spaces_left -= 1;
        }

        int a = i;
        int printed = 1;
        while (printed <= i) {
            cout << a;
            a += 1;
            printed += 1;
        }
        cout << endl; 
        i += 1;
    }
}