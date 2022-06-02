#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin >> str;

    for (int start = 0; str[start] != '\0'; start++) {
        for (int end = start; str[end] != '\0'; end++) {
            for (int i = start; i <= end; i ++) {
                cout << str[i];
            }
            cout << endl;
        }
    }
}