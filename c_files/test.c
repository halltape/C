#include <stdio.h>

int main (void) {
    char s1[80];
    scanf("%[^\n]", s1);
    printf("\n%s\n", s1);
return 0;
}