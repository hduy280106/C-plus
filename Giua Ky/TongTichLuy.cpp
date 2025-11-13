#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        sum += a[i];
        cout << sum;
        if(i < n-1) {
            cout << " ";
        }
    }
}
