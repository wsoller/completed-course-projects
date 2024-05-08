#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int replace(string s, string k);
int only_alph(string s);

int main(int argc, string argv[])
{
    if (argc != 2 || argv[1] == NULL || strlen(argv[1]) != 26)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (only_alph(argv[1]) == 1)
    {
        return 1;
    }
    //prompt user for plain text
    string pT = get_string("plaintext: ");
    //generate ciphertext
    replace(pT, argv[1]);
}
//replace letter with its position
int replace(string s, string k)
{
    string ns = s;
    for (int i = 0; i < strlen(ns); i++)
    {
        char p = ns[i];
        //replace uppercase letters
        if (isalpha(p) && isupper(p))
        {
            int tp = p - 65;
            ns[i] = toupper(k[tp]);

        }
        //replace lowercase letters
        if (isalpha(p) && islower(p))
        {
            int tp = p - 97;
            ns[i] = tolower(k[tp]);
        }
    }
    printf("ciphertext: %s\n", ns);
    return 0;
}
int only_alph(string s)
{
    //might need to explicitly convert chars in string into int
    for (int i = 0; i < strlen(s); i++)
    {
        int sn = s[i];
        if (isalpha(s[i]) == 0)
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
        for (int ki = 0; ki < 26; ki++)
        {
            if (s[i] == s[ki] && i != ki)
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }
        //if ((s[i] < 91 && s[i] > 64) || (s[i] < 123 && s[i] > 96))
        //{
        //    return 0;
        //}
    }
    return 0;
}