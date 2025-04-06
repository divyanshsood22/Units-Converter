#include <stdio.h>
void weight()
{
    int from, to;
    float in_weight, result;
    printf("Choose From Unit:\n");
    printf("1. Milligram\n");
    printf("2. Gram\n");
    printf("3. Kilogram\n");
    printf("4. Quintal\n");
    printf("5. Ton\n");
    printf("6. Pound\n");
    scanf("%d", &from);
    printf("Choose To Unit:\n");
    scanf("%d", &to);
    printf("\nEnter the value to be converted:\n");
    scanf("%f", &in_weight);

    switch (from)
    {
    case 1:
        in_weight = in_weight / 1000 / 1000;
        break;
    case 2:
        in_weight = in_weight / 1000;
        break;
    case 3:
        break;
    case 4:
        in_weight = in_weight * 100;
        break;
    case 5:
        in_weight = in_weight * 1000;
        break;
    case 6:
        in_weight = in_weight * 0.453592;
        break;
    default:
        printf("Invalid Choice\n");
        return;
    }

    switch (to)
    {
    case 1:
        result = in_weight * 1000 * 1000;
        break;
    case 2:
        result = in_weight * 1000;
        break;
    case 3:
        result = in_weight;
        break;
    case 4:
        result = in_weight / 100;
        break;
    case 5:
        result = in_weight / 1000;
        break;
    case 6:
        result = in_weight / 0.453592;
        break;
    default:
        printf("Invalid Choice\n");
        return;
    }
    printf("Converted Weight = %.4f\n", result);
}
