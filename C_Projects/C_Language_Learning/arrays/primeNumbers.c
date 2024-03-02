#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int p; // p is the number we are checking to see if it is prime
    int i; // i is the number we are dividing p by

    int primes[50] = {0};
    int primeIndex = 2;

    // hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    // loop through all the numbers we are checking for primeness
    for (p = 5; p <= 100; p = p + 2) {
        bool isPrime = true;

        // loop through all the primes we have to see if any of them divide evenly into p
        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;
        
        // if we didn't find any numbers that divide evenly into p, then p is prime
        if (isPrime == true) {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    // print the primes
    for (i = 0; i < primeIndex; ++i)
        printf("%i ", primes[i]);
        
}