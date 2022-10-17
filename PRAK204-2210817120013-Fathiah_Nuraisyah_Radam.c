#include <stdio.h>
void main(){
      float jari2, tinggibejana, volume, luas, keliling;
      scanf("%f", &jari2);
      scanf("%f", &tinggibejana);
      volume   = 22 * jari2 * jari2 * tinggibejana/7;
      luas     = 2 * 22 * jari2 * (jari2 + tinggibejana)/7;
      keliling =  (2 * 22) * jari2/7;
      printf("Volume         =  %.2f\n", volume);
      printf("luas           =  %.2f\n", luas);
      printf("keliling       =  %.2f\n\n", keliling);
      scanf("%f %f", &jari2, &tinggibejana);
      volume   = 22 * jari2 * jari2 * tinggibejana/7;
      luas     = 2 * 22 * jari2 * (jari2 + tinggibejana)/7;
      keliling =  (2 * 22) * jari2/7;
      printf("Volume         =  %.2f\n", volume);
      printf("luas           =  %.2f\n", luas);
      printf("keliling       =  %.2f\n", keliling);
}