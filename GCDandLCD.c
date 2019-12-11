#include <stdio.h>
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a, int b)
{

    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    printf("INPUT the 1st number\n");
    scanf("%d",&a);
    printf("INPUT the second number\n");
    scanf("%d",&b);
    printf("GCD OR HCF = %d\n",gcd(a,b));
    printf("LCM = %d\n",lcm(a,b));

}
