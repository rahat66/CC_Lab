/// problem: Identify comment from a given file input.
#include<cstdio>
#include<cstring>
int main()
{
    FILE *f1;
    f1 =  fopen("newFile", "w");
    char c;
    int i =0,
        len;
    bool flag = false;
    char str[1000];

    while((c = getchar()) != EOF)
        putc(c, f1);
    fclose(f1);

    f1 = fopen("newFile", "r");

    while((c = getc(f1)) !=EOF){
       //printf("%c",c);
       str[i] = c;
        i++;
    }

    fclose(f1);
    len = i-1;

/// check line commnet
    if(str[0] == '/')
    {
        if(str[1] == '/')
            flag = true;
    }

//    printf("%c %c", str[len-1],str[len-2]);

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

