/* Encrypt a string by shifting each character by one position 
    char name[50];
    printf("Enter your name:");
    scanf("%s",name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = name[i]+1;    
    };
    printf("Encrypted name is %s\n",name); */
    /* Calculate area of rectangle using function
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
    */
#include <stdio.h>

int main()
{ char sentence[50];
  char input;
  int position;
    printf("Enter a sentence:");
    scanf("%[^\n]s", sentence);
    printf("Enter a character to find its position:");
    scanf(" %c",&input);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        printf("%c", sentence[i]);
        if (input == sentence[i])
        {

            position = i;
            break;
        }
                
    }
    if (position >= 0){
        printf("position: %d",position);
    }else{
        printf("not found");
    }
    
    
return 0;    
}