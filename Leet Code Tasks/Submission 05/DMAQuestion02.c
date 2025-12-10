/*
Question 3... Submission 5.
*/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>




char* concat_dynamic(char *dest, const char *src) {

    int old_len;

    if (dest == NULL) {
        old_len = 0;
    }
    else {
        old_len = strlen(dest);
    }

    int new_len = strlen(src);

    char *new_block = realloc(dest, old_len + new_len + 1);

    if (new_block == NULL){
        printf("Memory allocation failed during concatenation!\n");
        free(dest);
        return NULL;
    }

    strcpy(new_block + old_len, src);
    return new_block;
}

int main() {
    char *input = NULL;
    char *combined = NULL;

    while (1){
        printf("\nEnter a string (or Q to quit): ");

        input = malloc(200 * sizeof(char));
        if (input == NULL){
            printf("Memory allocation failed!\n");
            return 1;
        }

        fgets(input, 200, stdin);

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "Q") == 0 || strcmp(input, "q") == 0){
            free(input);
            break;
        }

        combined = concat_dynamic(combined, input);
        if (combined == NULL){
            free(input);
            return 1;
        }

        printf("You entered: %s\n", input);

        free(input);
    }

    printf("\nFinal concatenated result:\n");
    if (combined){
        printf("%s\n", combined);
    }
    else{
        printf("(No strings entered)\n");
    }

    free(combined);

    return 0;
}



