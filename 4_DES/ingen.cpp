#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[64];
  FILE *fw;
  fw = fopen("inrand.txt","w+");
  // random_device rng;
  std::random_device dev;
  std::mt19937 rng(dev());
  std::default_random_engine urbg{dev()}; 
  // distribution in range [1, 6]

  // generating 2^17 random input
  for(int j=0;j <= 99999;j++){
    for (int i = 0; i <= 63; i++){
      // a[i] = rng()%2;
      a[i] = (urbg() - urbg()) % 2;
      fprintf(fw, "%d",a[i]);
    } 
    fprintf(fw, "\n");
  }

}
