#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned a, digit, answer, count;

int main() {

    count = 0;
    answer = 0;

    scanf("%d", &a);

    while (a > 0) {
        digit = a % 10;
        answer = answer + ((pow(2, count)) * digit);
        count++;
        a = a / 10;
    }

    printf("%d \n", answer);

    return 0;
}
