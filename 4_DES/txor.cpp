#include <bits/stdc++.h>
using namespace std;

int main(){
    FILE *fr, *fw;
    fr = fopen("inrand.txt", "r+");
    fw = fopen("inpair.txt", "w+");
    string XOR = "0000000000000000100100000001000000010000000000000101000000000000";
    char line1[17], line2[17];
    
    for (int i = 0; i <= 99999; i++){
        char a[64]; int b[64];
        fscanf(fr, "%s", a);
        // a^b = XOR => a^XOR = b
        for (int j = 0; j <= 63; j++) b[j] = ((int)(a[j] - 48) ^ (int)(XOR[j]-48));
        for (int l = 0; l <= 15; l++){
            int h1, h2;
            h1 = 8 * (a[4 * l] - 48) + 4 * (a[1 + 4 * l] - 48) + 2 * (a[2 + 4 * l] - 48) + 1 * (a[3 + 4 * l] - 48);
            h2 = 8 * b[4 * l] + 4 * b[1 + 4 * l] + 2 * b[2 + 4 * l] + 1 * b[3 + 4 * l];
            h1 = h1 + 100;
            h2 = h2 + 100;
            line1[l] = h1;
            line2[l] = h2;
        }
        fprintf(fw, "%s\n%s\n", (string)line1, (string)line2);}
}
