#include <iostream>
using namespace std;
#include <climits>
#include <cstring>


int main() {
    char str[100];
    cin.getline(str,100);

    char word[100];

    int min_len = INT_MAX;
    int i = 0;

    while (str[i] != '\0') {
        int len = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            len += 1;
            i++;
        }
        
        if (len < min_len) {
            min_len = len;

            int ind = 0;
            for (int j = i-len; j < i; j++) {
                word[ind] = str[j];
                ind += 1;
            }
        }
        i++;
    }

    for (int i = 0; i < min_len; i++) {
        cout << word[i];
    }
}