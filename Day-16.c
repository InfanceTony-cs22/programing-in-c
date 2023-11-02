#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
     // Calculate the size of the pattern (2n - 1)
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find the minimum distance to the center
            int minDist = i < j ? i : j;
            minDist = minDist < size - i ? minDist : size - i - 1;
            minDist = minDist < size - j ? minDist : size - j - 1;
            
            // Calculate the number to print (n - minDist)
            int num = n - minDist;

            // Print the number with proper spacing
            if (j == 0) {
                printf("%d", num);
            } else {
                printf(" %d", num);
            }
        }
        printf("\n");
    }
  	// Complete the code to print the pattern.
    return 0;
}
