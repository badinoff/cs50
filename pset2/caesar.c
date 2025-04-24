#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;    
    }
    
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;        
        }
    }

    int k = atoi(argv[1]);

    string plaintext = get_string("Plain Text: ");

    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                char ciphertext = ((plaintext[i] - 65 + k) % 26) + 65;
                printf("%c", ciphertext);
            }
            else 
            {
                char ciphertext = ((plaintext[i] - 97 + k) % 26) + 97;
                printf("%c", ciphertext);
            }
            
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
