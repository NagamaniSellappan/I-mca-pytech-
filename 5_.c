#include <stdio.h>

int main() {
    int i = 0, limit;

    printf("Enter limit: ");
    scanf("%d", &limit);

    do {
        printf("%d ", i);
        i++;
    } while(i < limit);

    printf("\n");
    return 0;
}

