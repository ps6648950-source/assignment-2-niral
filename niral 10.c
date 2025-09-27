#include<stdio.h>

int main (){
int n,sum=1;
printf("Enter the number:");
scanf("%d" ,&n);

for(int i=1;i<=n;i++){
sum =sum*i;
}
printf("Factorial %d =%d\n",n,sum);

return 0;
}
