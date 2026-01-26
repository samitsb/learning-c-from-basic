//1.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "programming";
    char search;
    int found = -1;

    printf("Enter a letter to find: ");
    scanf(" %c", &search); 

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == search) {
            found = i;
            break; 
        }
    }

    if (found != -1)
        printf("The letter '%c' is at index: %d\n", search, found);
    else
        printf("Letter not found.\n");

    return 0;
}   

//2.
#include <stdio.h>

int main() {
    int n;
    float marks[100], total = 0;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    printf("Total marks obtained: %.2f\n", total);
    return 0;
}
//3.
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    float sum = 0, average;

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    average = sum / length;
    printf("The average is: %.2f\n", average);
    return 0;
}
//4.
#include <stdio.h>

int main() {
    int arr[] = {45, 12, 89, 2, 67, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}