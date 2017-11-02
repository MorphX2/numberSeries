#include<stdio.h>

int main() {
    int seriesIndex = 0;
    int seriesLimit;
    int x = 1;
    int* seriesSet = NULL;

    printf("Please enter the number of degrees you want to evaluate in the series: \n");
    scanf("%d", &seriesLimit);
    for (seriesIndex = 0;seriesIndex <= seriesLimit;seriesIndex++) {
      x = (x * 2) + 2;
      seriesSet[seriesIndex] = x;
      printf("%d \n", seriesSet[x]);
    }
}
