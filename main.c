#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,u;
    printf("enter the value of n");
    scanf("%d",&n);

   u=6;
   for(i=1;i<=n;i++)
    u=4*u+10;
   printf("u%d=%d",n,u);

    return 0;
}
