

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


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


float main()
{
  
    int N = 5;
    int k = 10;
    
    /*a = 1 < a < n - 1*/
    int a = (rand() % (N - 1)) + 1;

    
    
    if(ipow(a, N - 1) != (1 % N) && gcd(a, N) == 1)
    {
        printf("%s", "N is composite but not a Carmichael number");
        k = 0;
        exit(0);
    } 
    
    for (int i = 0; a < k; a ++ )
    {

     a = (ipow(a, N - 1) != (1 % N) && gcd(a, N) == 1 ? rand() % N : -1);
     a =  (ipow(a, N - 1) == (1 % N) && gcd(a, N) != 1 ? rand() % N : -1);
     
     if(a == -1)
     { 
       
       
       return (float) (1 - ipow(2, -k));   
     
     }
     
     else
     {      
       
        return (float) (1 - ipow(2, -k));  
      
     }
    
        
    }


}
