#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    
    int n1 = (rand() % 20) + 1;
    printf("intelligence : %d\n" , n1);
    
    int n2 = (rand() % (20 - n1)) + 1;
    printf("stamina : %d\n" , n2);
    
    int n3 = 20 - n1 - n2;
    printf("charisma : %d\n" , n3);
    
    char *job;

    if (n1 >= n2 && n1 >= n3) 
    {
        printf("mage");
    } 
    else if (n2 >= n1 && n2 >= n3) 
    {
        printf("knight");
    } 
    else 
    {
        printf("thief");
    }

    return 0;
}