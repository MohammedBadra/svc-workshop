/* this program factorizes prime numbers
prime factoring */

#include <stdio.h>
int isPrimeNumber(int number);

int main ()
{
    isPrimeNumber(3);
}
int isPrimeNumber(int number)
{
    int isPrimenumber =1;

    for(int divider = 1; divider <= number/2; divider++ )
    {
        if(number%divider ==0)
        {
            isPrimeNumber=0;
        }
    }
    isPrimeNumber ? printf("%d is prime number \n", number) : printf("%d is prime number \n", number);
    return isPrimenumber;
}


