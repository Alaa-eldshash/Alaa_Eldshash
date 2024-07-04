/*
 :Given an array, arr of n integers, and an integer element x,
find whether element x is present in the array.(let n=6)
Return the index of the first occurrence of x in the array , or -1 if it doesn't exist.(letx=22)
*/

#include <stdio.h>
#include <stdlib.h>
#define  n_integer 6 /* n=6 */
unsigned int array_8[n_integer]={11,55,88,22,55,66};

unsigned char finding_X (const unsigned int *array_8,
                         const unsigned array_length,
                         unsigned int Ele,
                         signed *Ele_index );

unsigned int array_length ;
unsigned int Ele_index=-1 ;
unsigned char retval ;
int main()
{
    retval = finding_X(array_8,n_integer,22,&Ele_index);
    printf("retval   =%i\n   ",retval);
    printf("Ele_index=%i\n   ",Ele_index);


    return 0;
}

unsigned char finding_X (const unsigned int *array_8,
                         const unsigned array_length,
                         unsigned int Ele,
                         signed *Ele_index )
{
    unsigned int   counter;
    unsigned char retval=0;  /* correct */

            if(NULL==*array_8 || NULL==*Ele_index)
                    {
                                  retval = 1;
                                  Ele_index = -1;      /* Error */

                    }
            else
                    {
                        for(counter=0 ; counter<n_integer ; counter++)
                        {
                 if(Ele == array_8[counter])
                  {
                        *Ele_index=counter;
                         break;
                  }
                else
                  {
                            *Ele_index=-1 ;
                  }
                        }
                    }


        return retval ;
}
