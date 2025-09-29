#include <stdio.h>
int main() {
    int i, j;
    for (j = 0; j < 6; j++) {
        i = (j / 2) + 1;
        printf("%d %d\n", i, 6 - i);
    }
    return 0;
}
