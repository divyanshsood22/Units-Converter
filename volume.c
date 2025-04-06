#include <stdio.h>
void volume()
{
    int from, to;
    float in_ml, result;
    printf("Choose From Unit:\n");
    printf("1. Milliliter\n");
    printf("2. Litre\n");
    printf("3. Gallon\n");
    scanf("%d", &from);
    printf("Choose To Unit:\n");
    scanf("%d", &to);
    printf("\nEnter the value to be converted:\n");
    scanf("%f", &in_ml);
    switch (from)
    {
    case 1:
        break;
    case 2:
        in_ml = in_ml * 1000;
        break;
    case 3:
        in_ml = in_ml * 3785.41;
        break;
    default:
        printf("Invalid choice.\n");
        return;
    }

    switch (to)
    {
    case 1:
        result = in_ml;
        break;
    case 2:
        result = in_ml / 1000;
        break;
    case 3:
        result = in_ml / 3785.41;
        break;
    default:
        printf("Invalid choice.\n");
        return;
    }
    printf("Converted Value = %.4f\n", result);
}
