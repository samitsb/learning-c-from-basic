#include <stdio.h>
// void swap(int *a, int *b) {
//     int temp;
    
//     // 1. Put the value at address 'a' into temp
//     temp = *a;
    
//     // 2. Put the value at address 'b' into address 'a'
//     *a= *b;
//     // 3. Put the value from temp into address 'b'
//     *b= temp;
// }

// int main() {
//     int x = 5, y = 10;
    
//     // To call it, we must send the ADDRESSES
    
//     swap(&x, &y);
    
//     printf("x is now %d, y is now %d", x, y);
//     return 0;
// }

// int main() {
//     int arr[5];
//     int *ptr = arr; // No & needed because 'arr' is already an address!

//     printf("Enter 5 numbers:\n");
//     for(int i = 0; i < 5; i++) {
//         // We need the ADDRESS of each spot
        
//         // Use (ptr + i) to get the address of the i-th room
//         scanf("%d", (ptr + i)); 
//     }

//     printf("You entered: ");
//     for(int i = 0; i < 5; i++) {
//         // Now we need the VALUE inside each spot
        
//         // What symbol do you add to (ptr + i) to see 'inside' the room?
//         printf("%d ", *(ptr + i)); 
//     }
//     return 0;
// }

int findArraySum(int *ptr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        // Add the VALUE at the current pointer position to sum
        // sum += ... ?
        sum += *(ptr+i);
    }
    return sum;
}