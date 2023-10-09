#include <stdio.h>

int main() {
    double radius, area;

    // Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area of the circle
    area = 3.14159 * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}
