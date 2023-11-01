#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int digitCount[10] = {0};
    
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';
            digitCount[digit]++;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", digitCount[i]);
    }
    
    return 0;
}
