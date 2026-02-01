//add two numbers
#include <stdio.h>
int addNum(int a,int b)
{
    int sum= a + b;
    return sum;
}
int main(){
    int num1,num2,total;
    printf("give two numbers:");
    scanf("%d" "%d",&num1,&num2);
    total=addNum(num1,num2);
    printf("The Sum:%d\n",total);
    return 0;
}
//function to calculate factorial
#include <stdio.h>
long long findfactorial(int n){
    long long fact =  1;
    for (long long i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int num;
    printf("enter positive integer:");
    scanf("%d",&num);

    if (num<0)
    {
        printf("factorial of negetive number does not exist.\n");

    }else{
        findfactorial(num);
        printf("factorial of %d is %lld\n",num,findfactorial(num));
    }

    return 0;

}

//function for exponential
#include <stdio.h>
long long findPower(int base, int exponent){
 long long result =1;
 for (int i = 1; i <= exponent; i++)
 {
    result *= base;
 }
 return result;
} 
 
int main(){
    int base,exponential;
    printf("Enter Base:");
    scanf("%d",&base);
    printf("\nEnter Exponential:");
    scanf("%d",&exponential);

    long long answer = findPower(base,exponential);
    printf("%d rased to the power %d is: %lld\n",base,exponential,answer);

    return 0;

}
 
//change to lower and upper case
#include <stdio.h>
void toUpper(char str[]){
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i]-=32;
        }
        
    }
    
}
void toLower(char str[]){
    for (int i = 0 ; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i]+=32;
        }
        
    }
   
}
int main(){
    char word[50];
    printf("enter a word:");
    scanf("%s",word);
    toUpper(word);
    printf("upper: %s\n",word);

    toLower(word);
    printf("lower: %s\n",word);
    return 0;
}

//min, max and average
#include <stdio.h>
int findMax(int arr[],int size){
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }       
    }
    return max; 
}
int findMin(int arr[],int size){
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
          min = arr[i];
        }        
    }
   return min; 
}
float findAverage(int arr[],int size){
  int sum=0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return (float)sum/size;
}

int main() {
    int numbers[5] = {10, 20, 5, 40, 15};
    int size = 5;
    
    int maxValue = findMax(numbers, size);
    int minValue = findMin(numbers, size);
    float avgValue = findAverage(numbers, size);
   
    printf("Max: %d\n", maxValue);
    printf("Min: %d\n", minValue);
    printf("Average: %.2f\n", avgValue);

    return 0;
}

//matrix  addition
#include <stdio.h>
void addMatrix(int A[3][3], int B[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = A[i][j]+B[i][j];
            
        }        
    }    
}
//extra transpose
void transposeMatrix(int A[3][3], int T[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            T[j][i] = A[i][j]; 
        }
    }
}
int main() {
    int mat1[3][3] = {{1, 2, 0}, {4, 3, 6}, {5, 8, 5}};
    int mat2[3][3] = {{4, 5, 7}, {2, 5, 3}, {3, 0, 1}};
    int sum[3][3]; 
    int transpose[3][3];

    
    addMatrix(mat1, mat2, sum);

    
    printf("Resulting Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2d ", sum[i][j]);
        }
        printf("\n"); 
    }
    //extra
    transposeMatrix(sum,transpose);
    printf("Transpose:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          printf("%3d ",transpose[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}