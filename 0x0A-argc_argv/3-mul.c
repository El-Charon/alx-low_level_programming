#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    // Convert the command-line arguments to integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    // Multiply the numbers
    int result = num1 * num2;

    // Print the result
    printf("%d\n", result);

    return 0;
}