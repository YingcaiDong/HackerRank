#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int add(int a, int b) {
  return a+b;
}
int main() {
  int num1,num2;
  int sum;
  scanf("%d %d",&num1,&num2);
  //int sum; 
  sum = add(num1,num2);
  printf("%d",sum);
  return 0;
}

