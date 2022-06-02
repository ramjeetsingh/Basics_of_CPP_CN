#include <iostream>
using namespace std;

int linerSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main () {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int arr[100000];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int x;
        cin >> x;

        cout << linerSearch(arr, n, x);
    }
}