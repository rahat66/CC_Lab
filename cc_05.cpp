/// Problem-05: List of keyword in a given file.
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    FILE *f1;

    string key[10] = {"int", "main", "char", "return", "include", "cstdio", "stdio.h" "string", "float"};

    int keylen = 8,
        i = 0,
        j = 0,
        cnt[10],
        t;

    char str[1000],
         c;

    f1 = fopen("newFile", "w");

    while((c = getchar()) != EOF)
        putc(c,f1);

    fclose(f1);

    f1 = fopen("newFile","r");

    while((c = getc(f1)) != EOF){
       str[i] = c;
       i++;
    }
    fclose(f1);

    string fle(str);

    for(int k = 0; k<keylen; k++){
        int a = fle.find(key[k]);
        if(a > 0){
            cnt[j] = k;
            j++;
        }
    }

    for(int k = 0; k<j; k++){
        t = cnt[k];
        cout << key[t] << " ";
    }

    return 0;
}


