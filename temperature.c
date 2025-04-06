#include <stdio.h>
void temperature()
{
    int from, to;
    float in_temp, result;
    printf("Choose From Unit:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    scanf("%d", &from);
    printf("Choose To Unit:\n");
    scanf("%d", &to);
    printf("\nEnter the value to be converted:\n");
    scanf("%f", &in_temp);
    switch (from)
    {
    case 1:
        in_temp = in_temp;
        break;
    case 2:
        in_temp = (in_temp - 32) * 5 / 9;
        break;
    case 3:
        in_temp = in_temp - 273.15;
        break;
    default:
        printf("Invalid Choice\n");
        return;
    }

    switch (to)
    {
    case 1:
        result = in_temp;
        break;
    case 2:
        result = (in_temp * 9 / 5) + 32;
        break;
    case 3:
        result = in_temp + 273.15;
        break;
    default:
        printf("Invalid Choice\n");
        return;
    }
    printf("Converted Temperature = %f\n", result);
}
