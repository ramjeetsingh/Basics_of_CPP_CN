#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++){
        int n;
        cin >> n;

        int arr[100];
        int no = 1;
        int index = 0;

        while (no <= n) {
            arr[index] = no;
            index++;
            no += 2;
        }

        no = n - (n%2);

        while (no > 0) {
            arr[index] = no;
            index++;
            no -= 2;
        }

        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}