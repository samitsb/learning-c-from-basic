//1
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");    
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {        
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }       
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }        
        i++;
    }
    printf("Toggled case string: %s", str);
    return 0;
}
//2
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;   
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    temp = num;   
    while (temp != 0) {
        remainder = temp % 10;       
        result += pow(remainder, n);
        temp /= 10;
    }    
    if ((int)result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
//3
#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;    
    while (num != 0) {
        remainder = num % 10;           
        reversedNum = reversedNum * 10 + remainder; 
        num /= 10;                      
    }
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
//4
#include <stdio.h>

int main() {
    int arr[10], i;    
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }   
    printf("\nEven numbers: ");
    for(i = 0; i < 10; i++) {       
        (arr[i] % 2 == 0) ? printf("%d ", arr[i]) : 0;
    }
    printf("\nOdd numbers: ");
    for(i = 0; i < 10; i++) {
        (arr[i] % 2 != 0) ? printf("%d ", arr[i]) : 0;
    }

    printf("\n");
    return 0;
}