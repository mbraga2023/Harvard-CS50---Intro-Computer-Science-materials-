#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

    int index = round ();


int main()
{
 string text = get_string("Text: ");

 //variaveis
 int letras = 0;
 int palavras = 1;
 int frases = 0;
 
for(int i=0; i<strlen(text); i++)
{
    if (isalpha(text[i]))
    {
    letras++;
    }
}
for (int i=0;text[i] !='\0';i++)
{
    if (text[i] == 32 && text[i+1] != 32)
    {
    palavras++;
    }

}
for (int i=0; text[i]!='\0';i++)
{
    if(text[i]=='.'||text[i]=='!'||text[i]=='?')
                {       
                frases++;
                }
}
    float L = (float)letras/(float)palavras *100;
    float S = (float)frases/(float)palavras*100;
    int index = round (0.0588 * (L) - 0.296 * (S)- 15.8);

    if (index<1)
    {
        printf("Before Grade 1\n");
    }
    if(index>16)
    {
        printf ("Grade 16+\n");
    }
    else
    {
    printf ("Grade %i\n", index);
    }

printf("Letras %i\n", letras);
printf("Palavras %i\n", palavras);
printf("Frases %i\n", frases);


}