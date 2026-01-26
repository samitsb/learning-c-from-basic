/*int num, originalnum, remainder,n=0;
    float result=0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalnum=num;

    int temp=num;
    while (temp !=0)
    {
        temp /= 10;
        n++;
    }
    temp = num;
    while (temp!=0)
    {
        remainder = temp % 10;
        result=result+pow(remainder,n);
        temp/=10;
    }
    if((int)result==originalnum)
      printf("%d is an armstrong number.\n",num);
    else
    printf("%d is not an armstrong number.\n",num);
    */
   //to print table of n
#include <stdio.h>

int main(){
  int n,i=1;
  printf("enter a number");
  scanf("%d",&n);
  while (i<=10)
  {
    printf("%d * %d = %d\n",n,i,n*i);
    i++;
  }
    return 0;
}