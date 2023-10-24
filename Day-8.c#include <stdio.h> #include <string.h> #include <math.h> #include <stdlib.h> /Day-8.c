#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_and=0,max_or=0,max_xor=0;

    for (int i=1;i<=n;i++) {
        for (int j=i+1;j<=n;j++) {
            int and_result=i&j;
            int or_result=i|j;
            int xor_result=i^j;

            if (and_result<k && and_result>max_and) {
                max_and=and_result;
            }
            if (or_result<k && or_result>max_or) {
                max_or=or_result;
            }
            if (xor_result<k && xor_result>max_xor) {
                max_xor=xor_result;
            }
        }
    }

    printf("%d",max_and);
     printf("\n%d",max_or);
     printf("\n%d",max_xor);
}

int main()
 {
    int n, k;
scanf("%d",&n);
scanf("%d",&k);
    calculate_the_maximum(n, k);

    return 0;
}
