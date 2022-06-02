#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int j = 1; j < i; j++) {
            if (j==1){
                continue;
            }
            if (i%j == 0) {
                prime = false;
                break;
            }
        }
        if (prime == true) {
            cout << i << endl;
        }
    }
}
