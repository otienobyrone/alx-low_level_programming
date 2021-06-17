#include<stdio.h>
int main(){
char charType;
int intType;
int longType;
int longlongType;
float floatType;
// sizeof evaluates the size of a variable
  printf("Size of char: %zu byte\n", sizeof(charType));
  printf("Size of int: %zu bytes\n", sizeof(intType));
  printf("Size of long init: %ld bytes\n", sizeof(longType));
  printf("Size of long long init: %ld bytes\n", sizeof(intType));
  printf("Size of float is %ld bytes\n",sizeof(floatType));
  return 0;
    }
