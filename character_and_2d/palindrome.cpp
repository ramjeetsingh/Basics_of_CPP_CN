#include <iostream>
using namespace std;

int main() {
    char str[10];
    cin >> str;

    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }

    bool palind = true;

    for (int i = 0; i <= (len/2)-1; i++) {
        if (str[i] != str[len-i-1]) {
            palind = false;
            break;
        }
    }
    cout << palind;
}
