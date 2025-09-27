#include<stdio.h>

int main (){
int n,i;

printf("Enter a nnumber:");
scanf("%d",&n);

printf("First %d natural numbers are:\n",n);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
}
return 0;
}

