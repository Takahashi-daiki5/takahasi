#include <stdio.h>
#include <math.h>


int keisan(int a,int b,int c)
{
    int D;
    D = b * b - 4 * a * c;
    
    if(D> 0)
    {
        printf("二つの実数解をもつ\n");
    }
    
    else if(D=0){
        printf("１つの実数解をもつ\n");
    }
    
    else if(D>0){
        printf("虚数解を持つ\n");
     }
}

int main()
{
    int a;

    do {
        printf("a=");
        scanf("%d", &a);

        if (a == 0) {
            printf("a=0は入力できません\n");
        }
    } while (a == 0);

    int b;
    printf("b=");
    scanf("%d", &b);

    int c;
    printf("c=");
    scanf("%d", &c);

　　keisan(a, b, c)
　　
    return 0;
}
