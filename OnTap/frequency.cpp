#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt[26] = {0};

    // Đếm số lần xuất hiện
    for (char c : s) {
        cnt[c - 'a']++;
    }

    // In theo thứ tự a -> z
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            cout << char('a' + i) << " " << cnt[i] << endl;
        }
    }

    return 0;
}
