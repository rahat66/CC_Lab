/// Problem-09:validate variable.
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    char str[30];
    gets(str);
    int len = strlen(str);
    bool flag = false;

    if( (str[0] >= 65 && str[0] <= 90) || (str[0] >= 97 && str[0] <= 122) || str[0] == 95  )
    {
        for(int i=1; i<len; i++)
        {
            if( (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57) || str[i] == 95)
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
    }

    if(flag)
        printf("Valide");
    else
        printf("invalide");


    return 0;
}

