#include <stdio.h>
 int main() {
    char name[25];
    fgets(name, 25, stdin);
    printf("%s", name);
 }