#include <iostream>
using namespace std;

int search(int arr[], int l, int r, int x) {
    if (l <= r) {
        int mid = l + (r-l)/2;

        if (x == arr[mid]) {
            return mid;
        } else if (x > arr[mid]) {
            return search(arr, mid + 1, r, x);
        }else{
            return search(arr, l, mid - 1, x);
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;

        int ans = search(arr, 0, n-1, x);
        cout << ans << endl;
    }
}