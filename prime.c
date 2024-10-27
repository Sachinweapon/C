//Task for 26/10/2024
//1.Check if prime
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d is not an prime number",n);
        }
        
    }
    return 0;
}