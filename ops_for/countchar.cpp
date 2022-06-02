#include <iostream>
using namespace std;

int main() {
    char s;
    s = cin.get();

    int no_of_letters = 0;
    int no_of_dig = 0;
    int no_of_spaces = 0;

    while (s != '$') {
        int a = s;
        if (a == 32 || a == 9 || a == 10) {
            no_of_spaces++;
        } else if (a >= 48 && a <= 57) {
            no_of_dig++;
        } else {
            no_of_letters++;
        }
        s = cin.get();
    }
    cout << no_of_letters << " " << no_of_dig << " " << no_of_spaces;
}