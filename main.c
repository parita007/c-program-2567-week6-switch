#include <stdio.h>

int choice;
float length, width, perimeter, area;

int main(void)
{
    printf("1. Perimeter of the rectangle\n");
    printf("2. Area of the rectangle\n");
    printf("Enter your choice 1 or 2: ");
    scanf("%d", &choice);

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    switch(choice) {
        case 1:
            perimeter = 2 * (length + width);
            printf("Perimeter of the rectangle = %f\n", perimeter);
            break;

        case 2:
            area = length * width;
            printf("Area of the rectangle = %f\n", area);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}