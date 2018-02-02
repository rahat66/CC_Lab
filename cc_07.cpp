/// Problem-07: Validate Operators
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string test;
    cin >> (test);
    string oprtr []   = {"+", "++", "^", "|", "&", ">", "~", "<<", ">>", "==", "!=", "<"};
    string meaning [] = {"addition", "increment", "XOR", "OR", "AND", "greater-than", "complement", "shift left", "shift right", "equality", "inequality", "less-than"};
    int keylen = 12;
    for(int i=0; i<keylen; i++){

        if(test == oprtr[i]){
            cout << meaning[i] << "\n";
            break;
        }
    }


    return 0;
}

