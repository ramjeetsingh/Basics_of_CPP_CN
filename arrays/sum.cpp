#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    cout << s;
}