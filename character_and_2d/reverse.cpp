#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len += 1;
    }

    char out[100];
    int k = 0;
    int j = 0;
    char word[100];

    for (int i = len - 1; i >= 0; i--) {
        if (str[i] != ' ' ) {
            word[j] = str[i];
            j++;
        }
        if (str[i] == ' ' || i == 0) {
            for (int l = j - 1; l >= 0; l--) {
                out[k] = word[l];
                k++;
            }
            out[k] = ' ';
            k++;
            
            j = 0;
        }
    }
    cout << out;
}