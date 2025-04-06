#include <stdio.h>
void time()
{
    int from, to;
    float value, in_seconds, result;
    printf("Choose From Unit:\n");
    printf("1. Seconds\n");
    printf("2. Minutes\n");
    printf("3. Hours\n");
    printf("4. Days\n");
    printf("5. Months\n");
    printf("6. Years\n");
    scanf("%d", &from);
    printf("Choose To Unit:\n");
    scanf("%d", &to);
    printf("\nEnter the value to be converted:\n");
    scanf("%f", &value);
    switch (from)
    {
    case 1:
        in_seconds = value;
        break;
    case 2:
        in_seconds = value * 60;
        break;
    case 3:
        in_seconds = value * 3600;
        break;
    case 4:
        in_seconds = value * 86400;
        break;
    case 5:
        in_seconds = value * 2628000;
        break;
    case 6:
        in_seconds = value * 31536000;
        break;
    default:
        printf("Invalid Choice");
        return;
    }

    switch (to)
    {
    case 1:
        result = in_seconds;
        break;
    case 2:
        result = in_seconds / 60;
        break;
    case 3:
        result = in_seconds / 3600;
        break;
    case 4:
        result = in_seconds / 86400;
        break;
    case 5:
        result = in_seconds / 2628000;
        break;
    case 6:
        result = in_seconds / 31536000;
        break;
    default:
        printf("Invalid Choice");
        return;
    }
    printf("Converted Value = %f\n", result);
}
