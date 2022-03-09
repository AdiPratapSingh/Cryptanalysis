#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[64];
  FILE *fr;
  fr = fopen("rand_input.txt","w+");

  // generating 2^17 random input
  for(int j=0;j < (1<<17);j++){
    for (int i = 0; i < 64; i++){
      a[i] = rand()%2;
    }

    for (int i = 0; i < 64; i++)
      fprintf(fr, "%d",a[i]);
    fprintf(fr, "\n");
    j++;
  }

}