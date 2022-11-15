//Write a function to transform a string into lowercase
#include<stdio.h>
#include<string.h>
 
int main() {
   char string[100];
 
   printf("Enter String : ");
   gets(string);
 
   strlwr(string);
   printf("\nString after strlwr : %s", string);
 
   return (0);
}
