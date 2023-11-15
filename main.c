
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* 

pick a random a
 with 1<a<N−1
 .

case 1: aN−1≡1 (mod N)
 then pick another a
 and repeat the test.

case 2: aN−1≢1 (mod N)
 and gcd(a,N)=1
 then N
 is composite but not a Carmichael number. We are finished.

case 3: aN−1≢1 (mod N)
 and gcd(a,N)≠1
 then N
 is composite and gcd(a,N)
 is a non-trivial Divisor of N
. Pick another a
 and repeat the test.

for case 1 and 3 repeat the test k
-times. When finished N
 is a Carmichael number with probability 1−2−k
.
*/

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}


int ipow(int base, int exp)
{
    int result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }

    return result;
}


int main()
{
  
    int N = 5;
    /*a = 1 < a < n - 1*/
    int a = (rand() % (N - 1)) + 1;

    /* 1−2^−k*/
    int probability = 0;
    
    
    for (int i = 0; a < N; a ++ )
    {
     if(ipow(a, N - 1) != (1 % N) && gcd(a, N) == 1)
     {
       break;    
     } 

     if(ipow(a, N - 1) == (1 % N) && gcd(a, N) == 1 ? a = rand() % N : true) 
     
    
        
    }

    return 0;
}
