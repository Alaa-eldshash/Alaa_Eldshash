#include <stdio.h>
#include <stdlib.h>
unsigned int n ;/* number of problem n=1:1000 */
char  petya, vasya, tonya ;
unsigned int counter=0 ;
char retval ; /* 0 OR 1 */

int main()

{
       printf("please input the number of problem \n");
       scanf("%d", &n);
    for (counter = 0; counter < n; counter++)
        {
        scanf("%d %d %d", &petya, &vasya, &tonya);
        }

        if (petya + vasya + tonya >= 2)
        {
            retval++;
        }


       printf("%d\n", retval);


    return 0;
}
