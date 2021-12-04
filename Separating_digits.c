 //Libraries
#include <stdio.h>

//Main Function

int main()
{
    int Five_digit,a,b,c,d,e,k;

    printf("Enter the value of Five_digit : ");
    scanf("%d",&Five_digit);

    k = Five_digit;

    a = k%10;
    k = k/10;
    b = k%10;
    k = k/10;
    c = k%10;
    k = k/10;
    d = k%10;
    e = k/10;

    printf("Five_digit = %d     %d     %d     %d     %d\n",e,d,c,b,a);
    return 0;
}