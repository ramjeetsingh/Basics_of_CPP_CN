#include <iostream>
using namespace std;

bool check(int n) {
    if (n == 0 || n == 1) {
        return true;
    } 

    int no = 1;
    int prev = 1;

    while (no <= n) {
        if (no == n) {
            return true;
        }
        
        int temp = no;
        no += prev;
        prev = temp;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    cout << check(n);
}