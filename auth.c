#include <stdio.h>
#include <string.h>
void registerUser()
{
    char username[50], password[50];
    FILE *fp;
    printf("\n------ Register ------\n");
    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);
    fp = fopen("user.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    fprintf(fp, "%s %s", username, password);
    fclose(fp);
    printf("Registration Successful!\n\n");
}
int loginUser()
{
    char username[50], password[50];
    char storedUsername[50], storedPassword[50];
    FILE *fp;
    printf("\n------ Login ------\n");
    printf("Enter Username: ");
    scanf("%s", username);
    printf("Enter Password: ");
    scanf("%s", password);
    fp = fopen("user.txt", "r");
    if(fp == NULL)
    {
        printf("Error: No registered user found! Register first.\n");
        return 0;
    }
    fscanf(fp, "%s %s", storedUsername, storedPassword);
    fclose(fp);
    if(strcmp(username, storedUsername) == 0 && strcmp(password, storedPassword) == 0)
    {
        printf("Login Successful!\n\n");
        return 1;
    }
    else
    {
        printf("Invalid Username or Password!\n");
        return 0;
    }
}
