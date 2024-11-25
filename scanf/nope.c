#include <stdio.h>

int main() {
    int a;
    printf("voici la fonction f(x)\n");
    printf("f(x)= 12x + 2\n");
    printf("entrez une valeur :\n");
    scanf("%d", &a);
    printf("f(%d) est : %d\n", a, 12*a + 2);
    return 0;
}