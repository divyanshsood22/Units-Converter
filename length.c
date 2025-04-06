#include <stdio.h>
void length()
{
    int from, to;
    float value, in_meter, result;
    printf("Choose From Unit:\n");
    printf("1. Millimeter\n");
    printf("2. Centimeter\n");
    printf("3. Meter\n");
    printf("4. Kilometer\n");
    printf("5. Inch\n");
    printf("6. Foot\n");
    printf("7. Yard\n");
    printf("8. Mile\n");
    scanf("%d", &from);
    printf("Choose To Unit:\n");
    scanf("%d", &to);
    printf("\nEnter the value to be converted:\n");
    scanf("%f", &value);
    switch (from)
    {
    case 1:
        in_meter = value * 0.001;
        break;
    case 2:
        in_meter = value * 0.01;
        break;
    case 3:
        in_meter = value;
        break;
    case 4:
        in_meter = value * 1000;
        break;
    case 5:
        in_meter = value * 0.0254;
        break;
    case 6:
        in_meter = value * 0.3048;
        break;
    case 7:
        in_meter = value * 0.9144;
        break;
    case 8:
        in_meter = value * 1609.34;
        break;
    default:
        printf("Invalid Choice!\n");
        return;
    }

    switch (to)
    {
    case 1:
        result = in_meter / 0.001;
        break;
    case 2:
        result = in_meter / 0.01;
        break;
    case 3:
        result = in_meter;
        break;
    case 4:
        result = in_meter / 1000;
        break;
    case 5:
        result = in_meter / 0.0254;
        break;
    case 6:
        result = in_meter / 0.3048;
        break;
    case 7:
        result = in_meter / 0.9144;
        break;
    case 8:
        result = in_meter / 1609.34;
        break;
    default:
        printf("Invalid Choice!\n");
        return;
    }
    printf("\nConverted Value = %.4f\n", result);
}
