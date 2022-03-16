#include <bits/stdc++.h>
using namespace std;

string toBinary(int n, int len)
{
    string binary;
    for (unsigned i = (1 << len - 1); i >= 1; i = i / 2) {
        binary += (n & i) ? "1" : "0";
    }
    return binary;
}

int main(){
    FILE* fi, *fo;
    fi = fopen("outpair.txt","r+");
    fo = fopen("output.txt","w+");
    char c[17];

    for(int i=0; i< (1<<18);i++
        fscanf(fi, "%s", c);
        for(int j=0; j<= 15;j++){
            int h = (int)c[j] - 100;
            fprintf(fo, "%d",h/8);
            h = h - 8*(h/8);
            fprintf(fo, "%d",h/4);
            h = h - 4*(h/4);
            fprintf(fo, "%d",h/2);
            h = h - 2*(h/2);
            fprintf(fo, "%d",h/1);
        }
        fprintf(fo, "\n");}
}
