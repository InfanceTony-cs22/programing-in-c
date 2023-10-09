#include <stdio.h>

// Define a union named "Value" with three members of different data types
union Value {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Create a union variable of type "Value"
    union Value data;

    // Assign values to the members of the union
    data.intValue = 42;
    printf("Integer Value: %d\n", data.intValue);

    data.floatValue = 3.14159;
    printf("Float Value: %f\n", data.floatValue);

    strcpy(data.stringValue, "Hello, Union!");
    printf("String Value: %s\n", data.stringValue);

    return 0;
}
