#include <stdio.h>
void time();
void length();
void volume();
void weight();
void temperature();
void conversion()
{
    int choice;
    printf("Select The Conversion Type:\n");
    printf("1. Length\n");
    printf("2. Time\n");
    printf("3. Volume\n");
    printf("4. Weight\n");
    printf("5. Temperature\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        length();
        break;
    case 2:
        time();
        break;
    case 3:
        volume();
        break;
    case 4:
        weight();
        break;
    case 5:
        temperature();
        break;
    default:
        printf("Invalid Choice!\n");
    }
}