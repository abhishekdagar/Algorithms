
#include <stdio.h>
 
int gcd(float, float);
 
int main()
{
    float a, b, result;
 
    printf("Enter the two numbers to find their GCD: ");
    scanf("%f%f", &a, &b);
    
    result = gcd(a, b);
    printf("The GCD of %d and %d is %f.\n", a, b, result);
}
 
int gcd(float a, float b)
{
    if(b==0)
     return a;
     else return gcd(b,a%b);
}
