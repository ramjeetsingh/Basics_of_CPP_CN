#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = n-i+1; j > 0; j--){
            cout << (n-i+1);
        }
        cout << endl;
    }
}