#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char th_word[101] ;/* 100 bit for the word and one bit as flow */
unsigned int n ;   /*  the number of charachter          */
unsigned int leng_1 ;
int counter=0 ;
int main()

{
      printf("please enter the number of words");  /* n= !!*/
    scanf("&%d ",n);
      printf("please enter the word");

     for ( counter = 0; counter < n; counter++)
        {
      printf("please enter the word");
    scanf("%s", th_word);
        leng_1=strlen(th_word);
        }

    if (leng_1 > 10)
        {
            printf("%c %d %c \n", th_word[0], leng_1 - 2, th_word[leng_1 - 1]);
        }
    else
        {

             printf("%s\n", th_word);
        }





    return 0;
}
