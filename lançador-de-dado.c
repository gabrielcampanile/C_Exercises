#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, lanca, dado[6] = {0, 0, 0, 0, 0, 0};

  printf("Número de lançamentos: ");
  scanf("%i", &n);

  for(int i=0; i<n; i++){
    lanca = rand()%6+1;
    dado[lanca-1]++;
  }

  printf("Número de lançamentos:\n");

  for(int i=0; i<6; i++)
    printf("Face %i = %i vezes\n", i+1, dado[i]);

  return 0;
}
