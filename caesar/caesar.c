#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char rotate(char p, int k); // rotate formula (p=plain chracter + k=cypher key.)
char pi, c, ci;


int main(int argc, string argv[]) 
{
    int k, lenght; //key

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;

    }

    for (int i; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;    
        }
    }
    

    k = atoi(argv[1]); //function convert a string to a int

    string plaintext = get_string("plaintext: ");
    lenght = strlen(plaintext);
    char ciphertext[lenght + 1];
    for (int i = 0; i < lenght; i++)
    {
        ciphertext[i] = rotate(plaintext[i], k);
    }
    ciphertext[lenght] = '\0';
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}

char rotate(char p, int k)
{
    char pi, c, ci;

    if (isupper(p))
    {
        pi = p - 65;
        ci = (pi + k) % 26; //=1 (we need to get back to ascii value 66)
        c = ci + 65;
    }
    else if (islower(p))
    {
        pi = p - 97;
        ci = (pi + k) % 26; //=1 (we need to get back to ascii value 98)
        c = ci + 97;

    }
    else
    {
        return p;

    }
    return c;
}