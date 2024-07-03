/* 3* Write a program in C to swap two numbers using a function.
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4
After swapping: n1 = 4, n2 = 2  */

#include <stdio.h>
#include <stdlib.h>
unsigned int number_1=2;
unsigned int number_2=4;
unsigned int *ptr_1=&number_1;
unsigned int *ptr_2=&number_2;

int main()
{

      printf("number_1=%i\n",number_1);
    *ptr_1=4;
      printf("number_1=%i\n",number_1);
    printf("--------------------------\n");
       printf("number_2=%i\n",number_1);
    *ptr_1=2;
      printf("number_2=%i\n",number_1);






    return 0;
}
