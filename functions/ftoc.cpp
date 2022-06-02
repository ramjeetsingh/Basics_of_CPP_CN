#include <iostream>
using namespace std;

int converter(int f) {
    int ans = f-32;
    ans *= (5.0/9);
    return ans;
}

int main() {
    int s;
    int e;
    int w;
    cin >> s >> e >> w;

    int temp = s;
    while (temp <= e) {
        cout << temp << " " << converter(temp) << endl;
        temp += w;
    }
}