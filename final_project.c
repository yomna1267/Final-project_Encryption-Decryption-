#include <stdio.h>
#include <stdlib.h>
#define SIZE 100// make const SIZE=100
char string[SIZE];
int choise, key;
void encrypt()
{
    puts("\nEnter shifted KEY times:");
    scanf("%d", &key);
    fflush (stdin);/*You can place a call to fflush() just after the scanf()
                    So the newline character gets erased from the stdin buffer and the next fgets() will stop to ask for input.*/
    printf("Enter a message : \n");
    fgets(string, SIZE, stdin);
    for(int i=0; i<strlen(string); ++i)
    {
            string[i]+=key;
    }
    printf("                                           Encrypted message: %s\n",string);
}
void decrypt() {
	char user_input2[SIZE];
	int i;
    puts("\nEnter shifted KEY times:");
    scanf("%d", &key);
    fflush (stdin);
	printf("Enter a message : \n");
	scanf_s("%s", user_input2);
	fflush(stdin);
	 for(i = 0; (i < SIZE && user_input2[i] != '\0'); i++)
        user_input2[i] = user_input2[i] - key;
    printf("\n                                           Decrypted message: %s\n", user_input2);
}
void menu()
{
     printf("\nPlease choose following options:\n");
    printf("1) Encrypt the string.\n");
    printf("2) Decrypt the string.\n");
    printf("3)  EXIT.\n");
}
int main()
{
    int x;
    menu();
    printf("\nEnter Your choice: ");
    scanf("%d",&x);
     while(x!=3)
    {

   if(x==1)
   {
      encrypt();

   }
   else if(x==2)
    {
    decrypt();

    }
    else if (x==3)
    {
        puts("Pleased to help you!");
        return 0;
    }
    else
    {
    printf("\nInvalid Choice ...Try Again....\n");
    }
    menu();
    printf("\nEnter Your choice: ");
     scanf("%d",&x);

     }
    return 0;
}
