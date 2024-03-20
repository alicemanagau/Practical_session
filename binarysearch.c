#include <stdio.h>

int binarySearch(int tableau[], int x, int low, int high) {
  // jusqua ce que le pointeur haut et bas se rejoignent 
  while (low <= high) {
    int milieu = low + (high - low) / 2;

    if (tableau[milieu] == x)
      return milieu;

    if (tableau[milieu] < x)
      low = milieu + 1;

    else
      high = milieu - 1;
  }

  return -1;
}

int main() {
  int tableau[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(tableau) / sizeof(tableau[0]);
  int x = 3;
  int resultat= binarySearch(tableau, x, 0, n - 1);
  if (resultat == -1)
    printf("La valeur n'est pas dans le tableau");
  else
    printf("la valeur est à l'occurence  %d", resultat);
  return 0;
}
