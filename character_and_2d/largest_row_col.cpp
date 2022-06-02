#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int q =0; q < t; q++) {
        int n, m;
        cin >> n >> m;

        int arr[10][10];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        int largest_sum = INT_MIN;
        int row_col_no = 0;
        char row_col = 'x';

        for (int i = 0; i < n; i++) {
            int s = 0;
            for (int j = 0; j < m; j++) {
                s += arr[i][j];
            }
            if (s > largest_sum) {
                largest_sum = s;
                row_col_no = i;
                row_col = 'r';
            }
        }
        for (int j = 0; j < m; j++) {
            int s = 0;
            for (int i = 0; i < n; i++) {
                s += arr[i][j];
            }
            if (s > largest_sum) {
                largest_sum = s;
                row_col_no = j;
                row_col = 'c';
            }
        }
        if (largest_sum == INT_MIN) {
            cout << largest_sum << endl;
        } else {
            if (row_col == 'r') {
                cout << "row " << row_col_no << ' ' << largest_sum << endl;
            } else {
                cout << "column " << row_col_no << ' ' << largest_sum << endl;
            }
        }
    }
}