#include <iostream>
using namespace std;

struct PhanSo {
    int num, den;
};

// Hàm tìm UCLN để rút gọn phân số
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

PhanSo tong(const PhanSo &ps1, const PhanSo &ps2) {
    PhanSo res;
    res.num = ps1.num * ps2.den + ps2.num * ps1.den;
    res.den = ps1.den * ps2.den;

    // Rút gọn phân số
    int g = gcd(abs(res.num), abs(res.den));
    res.num /= g;
    res.den /= g;

    return res;
}

bool ssLonHon(const PhanSo &ps1, const PhanSo &ps2) {
    // So sánh bằng cách nhân chéo
    return (long long)ps1.num * ps2.den > (long long)ps2.num * ps1.den;
}

int main() {
    int num, den;

    cin >> num >> den;
    PhanSo ps1 = {num, den};

    cin >> num >> den;
    PhanSo ps2 = {num, den};

    PhanSo ps3 = tong(ps1, ps2);
    cout << ps3.num << " " << ps3.den << " "
         << boolalpha << ssLonHon(ps1, ps2) << endl;

    return 0;
}
