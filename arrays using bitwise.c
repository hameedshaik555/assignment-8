#include <stdio.h>

int main()
{
    int a1[]={6,3,4};
    int a2[]={3,7,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a1[i]&a2[j]!=0)
            {
                printf("%d -%d\n",a1[i],a2[j]);
            }
        }
    }

return 0;
}
