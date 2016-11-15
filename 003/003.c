#include <stdio.h>

long largestPrimeFactor(long number) {
        long factor = 1;
        for (int i = 2; i * i <= number; i++) {
            if (number == 1)
                return factor;
            else if (number % i != 0)
                continue;
            else {
                factor = i;
                while (number % i == 0)
                    number /= i;
            }
        }
        return number;
}

int main() {
   printf("%ld\n", largestPrimeFactor(600851475143));
}