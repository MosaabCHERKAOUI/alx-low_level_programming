#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 0) {
        printf("%d is positive !", n);
    }
    if (n < 0) {
        printf("%d is negative !", n);
    }
    if (n == 0) {
        printf("%d is null ", n);
    }
    return 0;
}
