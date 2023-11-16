#include <stdio.h>
#include <stdlib.h>

int* total_number_of_books;
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    total_number_of_books = (int*)calloc(total_number_of_shelves, sizeof(int));
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));

    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = NULL;
    }

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);

            total_number_of_books[x]++;

            if (total_number_of_pages[x] == NULL) {
                total_number_of_pages[x] = (int*)malloc(sizeof(int));
            } else {
                total_number_of_pages[x] = (int*)realloc(total_number_of_pages[x],
                                                          total_number_of_books[x] * sizeof(int));
            }

            total_number_of_pages[x][total_number_of_books[x] - 1] = y;
        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", total_number_of_pages[x][y]);
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", total_number_of_books[x]);
        }
    }

    // Free allocated memory
    free(total_number_of_books);
    for (int i = 0; i < total_number_of_shelves; i++) {
        free(total_number_of_pages[i]);
    }
    free(total_number_of_pages);

    return 0;
}
