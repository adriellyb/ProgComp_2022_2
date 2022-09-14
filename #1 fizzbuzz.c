#include <stdio.h>

void fizzbuzz() {
    for (int x = 1; x <= 100; x++) {
        if (x%3 == 0 && x%5 == 0) {
            printf("\nfizzbuzz");
        }
        else if (x%3 == 0) {
            printf("\nfizz");
        }
        else if (x%5 == 0) {
            printf("\nbuzz");
        }
        else {
            printf("\n%d", x);
        }
    }
}

int main()
{
    fizzbuzz();

    return 0;
}
