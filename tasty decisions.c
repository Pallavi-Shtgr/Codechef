// Chef is buying sweet things to prepare for Halloween!
// The shop sells both chocolate and candy.
// Each bar of chocolate has a tastiness of X.
// Each piece of candy has a tastiness of Y.
// One packet of chocolate contains 2 bars, while one packet of candy contains 5 pieces.
// Chef can only buy one packet of something sweet, and so has to make a decision: which one should he buy in order to maximize the total tastiness of his purchase?
// Print Chocolate if the packet of chocolate is tastier, Candy if the packet of candy is tastier, and Either if they have the same tastiness


#include <stdio.h>

int main(void) {
  int k;
  scanf("%d",&k);
  while(k--){
      int m,q;
      scanf("%d%d",&m,&q);
      int w=m*2;
      int c=q*5;
      if(w>c){
          printf("Chocolate\n");
      }
      else if(w==c){
          printf("Either\n");
      }
      else{
          printf("Candy\n");
      }
  }
  return 0;
}