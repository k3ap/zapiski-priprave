#include <stdio.h>

void f(int vrednost, int *kazalec) {
    *kazalec = 2 * vrednost;
}

int main() {
    int x = 3;
    int y;
    f(x, &y);
    printf("%d\n", y);  // izpiše 6
    return 0;
}
