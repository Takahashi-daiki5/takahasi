#include <stdio.h>
#include <string.h>

int main(){
    char status[] = "Mad Scientist";
    int i;
    printf("The string '%s' is %lu characters long.\n", status, strlen(status));
    for (i = 0; i <= strlen(status); i++)
        printf("%d\n", i);
    return 0;
}
