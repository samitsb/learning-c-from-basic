/* the average calculator*/
/* int count,average;
    float totalsum=0;
    printf("How many numbers do you want to add:");
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
      int n;
      printf("enter a number:");
      scanf("%d",&n);
      totalsum = totalsum + n;
    }
    float avg = (float)totalsum / count;
    printf("the average is %.2f\n",avg);*/

#include <stdio.h>
int main()
 { int size;
  printf("enter the size:");
  scanf("%d",&size);
  for(int  i=0;i<=size;i++)
  {
    for (int j = 0; j < size; j++)
    {
        printf("* ");
    }
    printf("\n");
  }
   
 return 0;
}