#include <iostream>
using namespace std;
#include <climits>

int main() {
    int n;
    cin >> n;

    int arr[10];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int leaders[10];
    int ind = 0;
    int max_no = INT_MIN;

    for (int i = n-1; i >= 0; i--) {
        if (arr[i] > max_no) {
            max_no = arr[i];
            leaders[ind] = arr[i];
            ind++;
        }
    }

    for (int i = ind-1; i >= 0; i--) {
        cout << leaders[i] << ' ';
    }
}