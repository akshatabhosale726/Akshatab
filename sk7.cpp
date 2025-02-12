#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (//write condition for vowels) 
		{
            // update the appropriate variable
        } else if (ch >= 'b' && ch <= 'z')
		 {
           // update the appropriate variable
        }
    }

    printf("Vowels: %d, Consonants: %d\n", ________, ________); // Fill in the blanks
    return 0;
}

