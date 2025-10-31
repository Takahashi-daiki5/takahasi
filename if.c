#include <stdio.h>

int main()
{
    int k,t;
    printf("映画の動員数");
    scanf("%d", &k);
    
    printf("映画の製作費");
    scanf("%d", &t);
    
    if (k>=100 && t<=5000)
    {
        printf("黒字");
    }
    
    else if(50<k<100 && 5000<t<100000)
    {
        printf("プラスマイナス０");
    }
    
    else
    {
        printf("赤字");
    }
    
    return 0;
}