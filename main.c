#include <stdio.h>
void time();
void length();
void volume();
void weight();
void temperature();
void conversion();
void registerUser();
int loginUser();
int main()
{
    int choice;
    char ch = 'y';

    printf("------ Welcome to Unit Converter ------\n");
    printf("1. Register\n2. Login\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        registerUser();

    if(loginUser())
    {
        while(ch == 'y' || ch == 'Y')
        {
            conversion();
            printf("\nWant to perform the conversion again? (y/n): ");
            scanf(" %c", &ch);
        }
        printf("As you wish!\n");
    }
    else
    {
        printf("Login Failed! Exiting Program...\n");
    }

    return 0;
}
