#include <stdio.h>
void main(){
      float a, b, i, j, x, y, jumlah;
      scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
      jumlah= (a - b) * i / j - (x + y);
      printf("%.3f\n\n", jumlah);
      scanf("%f %f", &a, &b);
      scanf("%f %f", &i, &j);
      scanf("%f %f", &x, &y);
      jumlah= (a - b) * i / j - (x + y);
      printf("%.3f", jumlah);
}