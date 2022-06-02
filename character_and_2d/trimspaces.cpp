#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    char str2[100];

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str2[j] = str[i];
            j++;
        }
    }
    cout << str2;
}
