#include <stdio.h>

int main(void) {
    int anno;
    scanf("%d", &anno);
    if (anno %4 == 0) {
        if (anno %400 == 0) {
            printf("anno e' bisestile e socalere");
        } else {
            printf("anno e' bisestile");
        }
    } else {
        printf("anno non e' bisestile ne secolare");
    }
}
