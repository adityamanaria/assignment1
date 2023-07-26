/*You are required to write a C/C++ program to perform the following tasks:
1. Generate a Random Character.
2. A Character can be either from ”0”-”9” or ”A”-”F”.

Once the Random Character has been generated, your program should

print a beautiful message saying ”The Randomly Generated Char-
acter is F.”*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int random_number = rand() % 6;
    char random_character = 'A' + random_number;
    printf("The Randomly Generated Character is : %c\n", random_character);

    return 0;
}
