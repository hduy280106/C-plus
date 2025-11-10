#include <iostream>
using namespace std;

long factorial(int n) {
    // complete the function
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;

}

