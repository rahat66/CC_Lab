/// problem-01: Identify comment.
#include<cstdio>
#include<cstring>
int main()
{
    int len;
    bool flag = false;
    char str[30];
    gets(str);
    len = strlen(str);

/// check line commnet
    if(str[0] == '/')
    {
        if(str[1] == '/')
            flag = true;
    }

/* check block comment */
    if(str[0] == '/' && str[1] == '*')
    {
        if(str[len -1] == '/' && str[len -2] == '*')
            flag = true;
    }

    if(flag)
        printf("It's a comment\n");
    else
        printf("It's not a comment\n");

    return 0;
}

