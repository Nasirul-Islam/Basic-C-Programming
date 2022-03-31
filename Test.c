#include<stdio.h>

int * test() {
  static int x[4];
  for(int i=0;i<4;i++){
    printf("x1st = %d\n", x[i]);
    x[i] = i%2;
    printf("x2nd = %d\n", x[i]);
  }
  return x;
}

int main() {
  int * arr = test();
  printf("%d", *(arr+3));
}

