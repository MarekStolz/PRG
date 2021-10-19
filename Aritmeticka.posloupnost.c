#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int an(int a1, int d, int n) {
    return (a1 + (n - 1) * d);
}

void generuj(int a1, int d, int n) {
  int i;
  for(i = a1; a1 <= an; i = i + d)
 
  {
    if (i != an)
      printf("%d ", i);

   }
}

int main() {
   double a1, d, n;
   
   printf("a1 zaklad >>> ");
   scanf("%lf", &a1);
    
   printf("d kolik budeme pricitat  >>> ");
   scanf("%lf", &d);
    
    printf("n  kolikrat >>> ");
    scanf("%lf", &n);
    
  printf("----------------------\n");
  printf(" fuknce an = %d\n", an(a1, d, n));
  generuj(a1, d, n);
   
   return 0;
}