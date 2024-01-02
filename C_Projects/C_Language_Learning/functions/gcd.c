#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a = 105;
    int b = 30;

    int result = gcd(a, b);
    printf("The GCD of %i and %i is %i.", a, b, result);
}