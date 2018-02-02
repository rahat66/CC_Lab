/// Problem-06: Validate keyword.
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string test;
    cin >> (test);
    string key[10] = {"int", "main", "char", "return", "include", "cstdio", "string", "float"};
    int keylen = 8;
    bool flag = false;

    for(int i=0; i<keylen; i++)
    {
        if(test == key[i])
        {
            flag = true;
            break;
        }
    }

    if(flag)
        printf("validate\n");
    else
        printf("Not validate\n");

    return 0;
}


