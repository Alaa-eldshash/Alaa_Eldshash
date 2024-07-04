/*
Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are  :
15 10 12
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned int first_array[3]={15,10,12};
unsigned int secnod_array[3]={0 ,1 ,2};
unsigned int counter ;

int main()
{
    for(counter=0 ; counter<3 ;counter++)
        {
            printf("%i\n",secnod_array[counter]);
        }

     memcpy(secnod_array , first_array ,12);

      for(counter=0 ; counter<3 ;counter++)
        {
            printf("%i\n",secnod_array[counter]);
        }


    return 0;
}
