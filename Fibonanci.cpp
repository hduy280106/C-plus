#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n <= 2) {
        cout << 1;
    }
    int f1 = 1, f2 = 1, fn;
    for (int i = 3; i <= n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    cout << fn;
}
