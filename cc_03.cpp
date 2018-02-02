/// Problem-03: Count space in a file.
#include<cstdio>
#include<cstring>
int main()
{
    FILE *f1;
    char c;
    int cnt = 0;

    f1 = fopen("newFile", "w");
    while( (c = getchar() ) != EOF)
        putc(c, f1);

    fclose(f1);

    f1 = fopen("newFile","r");
    while( (c = getc(f1) ) != EOF){
        if(c == ' ')
            cnt++;
    }

    fclose(f1);

    printf("Number of space: %d\n", cnt);

    return 0;
}
