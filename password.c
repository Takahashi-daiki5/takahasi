#include <stdio.h>
#include <string.h>

int main() 
{
    char pwd[1024];
    printf("パスワードを入力 ");
    fgets(pwd, sizeof(pwd), stdin);
    
      size_t len = strlen(pwd);
    if (len > 0 && pwd[len - 1] == '\n')
    {
        pwd[len - 1] = '\0';
        len--;
    }
    
    int A = 0;
    int B = 0;

    for (size_t i = 0; i < len; i++) 
    {
        char c = pwd[i];

        if (c >= 'A' && c <= 'Z') 
        {
            A = 1;
        }

        else if (c >= 'a' && c <= 'z')
        {
            B = 1;
        }
    }

 
    int L = (len >= 8);

    if (L && A && B) 
    {
        printf("\n　強いパスワード\n");
    } 
    else 
    {
        printf("\n　強いパスワードではない\n");
        printf("改善点:\n");

        if (!L)
            printf("文字数が足りません（%zu 文字）。8文字以上にしてください。\n", len);
        if (!A)
            printf("大文字（A〜Z）を1文字以上含めてください。\n");
        if (!B)
            printf("小文字（a〜z）を1文字以上含めてください。\n");
    }

    return 0;
}