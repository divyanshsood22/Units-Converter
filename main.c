#include <stdio.h>
void time();
void length();
void volume();
void weight();
void temperature();
void conversion();
int main()
{
    char ch = 'y';
    while(ch == 'y' || ch == 'Y')
    {
        conversion();
        printf("\n Want to perform the conversion again? (y/n) \n");
        scanf(" %c", &ch);
    }
    printf("As you wish!\n");
    return 0;
}
