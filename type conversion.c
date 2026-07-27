#include <stdio.h>

int main() {
  int n1=10,sum;
sum = n1+3.14;
//here sum it will printf 13 because int value cannot produce the decimal point it can only show integer so,the sum of 10+3.14 will be 13 not 13.14
printf("the addition of the two numbers is %d",sum);
}