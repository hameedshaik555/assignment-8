#include <stdio.h>
#include<stdio.h>
int main()
{
int n;
float c;
scanf("%d",&n);
if(n>=0 &&n<=255)
{
    if(n==0)
    {
    printf("humidity:-20");
    
    }
    else if(n==235)
    {
        printf("humidity :20");
        
    }
    else 
    {
        c=((float)n-32)*5/9;
        printf("%f",c);
 }   }
 
   else 
   {
       printf("its invalid");
   }
}
