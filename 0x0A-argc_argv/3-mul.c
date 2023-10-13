#include <stdio.h>
#include "main.h"
/**
 * _ab - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 1;
    }

    // Convert the command-line arguments to integers
    int num1 = _ab(argv[1]);
    int num2 = _ab(argv[2]);

    // Perform the multiplication
    int result = num1 * num2;

    // Print the result
    printf("%d\n", result);

    return 0;
}
