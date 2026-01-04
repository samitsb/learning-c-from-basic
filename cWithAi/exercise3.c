
/* the average calculator*/
#include <stdio.h>
int main()
 { 
    int count,average;
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
    printf("the average is %.2f\n",avg);
 return 0;
}