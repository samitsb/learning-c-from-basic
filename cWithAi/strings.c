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
   /*find position of a character in a string
   char sentence[50];
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
   */
// #include <stdio.h>

// int main()
// { char word1[50];
//   char word2[50];
//     printf("Enter first word:");
//     scanf("%s", word1);
//     printf("Enter second word:");
//     scanf("%s", word2);
//     int i;
//     for (i = 0; word1[i] != '\0' && word2[i] != '\0'; i++)
//     {
//         if (word1[i] != word2[i])
//         {
//             break;
//         }
//     }
    
//     if (word1[i] == '\0' && word2[i] == '\0')
//     {
//         printf("Both words are same\n");
//     }
//     else
//     {
//         printf("Words are not same\n");
//     }  
    
    
// return 0;    
// }

//string basic 
//length of string
// #include <stdio.h>
// int main()
// {
//     char word[50];
//     int i = 0,vowel_count=0,j=0;
//  printf("enter the word:");
//  scanf("%s",&word);
//   while(word[i] != '\0')
//  {
//     i++;
//  }
 
//  printf("the length of %s is:%d",word,i);
//  printf("\n the reverse word is: ");
//  for (int j = i-1; j >= 0; j--)
//  {
//     printf("%c",word[j]);
    
//  }
//  for (int j = 0; j < i; j++)
//  {
//     if (word[j] =='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u'||
//         word[j] =='A'||word[j]=='E'||word[j]=='I'||word[j]=='O'||word[j]=='U'
//     )
//  {
//    vowel_count++;
//  }
//  } 
//  printf("\nvowel count:%d",vowel_count);
//  printf("\n");
//  return 0;
// }

//string palindrome
