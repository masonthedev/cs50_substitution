#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool validate_key(char *key);
char substitute(char c, char *key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Get key
    char *key = argv[1];

    // Validate key
    if (!validate_key(key))
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Prompt for plaintext
    string plaintext = get_string("plaintext: ");

    // Encrypt Plaintext
    printf("ciphertext: ");
    int n = strlen(plaintext);

    for (int i = 0; i < n; i++)
    {
        printf("%c", substitute(plaintext[i], key));
    }
    printf("\n");

    return 0;
}

// Check if the Key is a valid key
bool validate_key(char *key)
{
    // Check if key length is 26
    if (strlen(key) != 26)
        return false;

    // array to keep track of chars
    int char_count[26] = {0};

    for (int i = 0; i < 26; i++)
    {
        char character = tolower(key[i]);

        // check if character is alphabet
        if (!isalpha(character))
        {
            return false;
        }

        // Check if characrter is a repeat character
        if (char_count[character - 'a'] > 0)
        {
            return false;
        }

        char_count[character - 'a']++;
    }
    return true;
}

// Encrypt plaintext using substitution
char substitute(char c, char *key)
{
    if (isalpha(c))
    {
        int index;
        char encryptedChar;

        if (islower(c))
        {
            index = c - 'a';
            encryptedChar = tolower(key[index]);
        }
        else
        {
            index = c - 'A';
            encryptedChar = toupper(key[index]);
        }
        return encryptedChar;
    }
    return c;
}
