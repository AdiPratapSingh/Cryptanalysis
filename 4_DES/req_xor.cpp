// This file takes input from rand_input.txt and generates 
// req_xor.txt which produces the xor "Xor" on taking xor 
// linewise.  
#include <bits/stdc++.h>
using namespace std;

int main(){
  FILE *fi,*fo;
  fi = fopen("rand_input.txt","r+");
  fo = fopen("req_xor.txt","w+");

  char line[64];
  char s1[17],s2[17];
  for(int i=0;i < (1<<17);i++){
    // taking a line as bits and storing it in curr_xor
    fscanf(fi,"%s",line);
    bitset<64> a(line);
    bitset<64> Xor("0000000000000000100100000001000000010000000000000101000000000000");

    // a^b = 0000902010005000
    // b = a^0000902010005000
    bitset<64> curr_xor = a^Xor;

    // taking a byte and encoding it into two strings
    for(int j = 0 ; j < 16 ; j++){
      // cerr<<"yaha pe\n";
      int h1,h2;
      s1[j] = (a[4*j]*8 + a[j+1]*4 + a[j*4+2]*2 + a[j*4+3]) + 102;
      s2[j] = (curr_xor[j*4]*8 + curr_xor[j*4+1]*4 + curr_xor[j*4+2]*2 + curr_xor[j*4+3]) + 102;
    }
    s1[16] = '\0';
    s2[16] = '\0';

    fprintf(fo, "%s\n",s1);
    fprintf(fo, "%s\n",s2);
  }
}
