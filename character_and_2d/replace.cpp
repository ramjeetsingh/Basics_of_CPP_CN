#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin >> str;

    char c1; char c2;
    cin >> c1 >> c2;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c1) {
            str[i] = c2;
        }
    }
    cout << str;
}