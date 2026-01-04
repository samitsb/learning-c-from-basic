/* Encrypt a string by shifting each character by one position 
    char name[50];
    printf("Enter your name:");
    scanf("%s",name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = name[i]+1;    
    };
    printf("Encrypted name is %s\n",name); */
#include <stdio.h>
float calculateArea(float l, float w) {
    return l * w;
}
int main()
{ printf("enter length and width of rectangle:");
    float l,w;
    scanf("%f %f",&l,&w);
    float area = calculateArea(l,w);
    printf("area of rectangle is %.2f\n",area);    
   
return 0;    
}