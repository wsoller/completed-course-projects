#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int only_digits(string s);
int rotate(string s, int k);

int main(int argc, string argv[])
{
    //generate incorrect command-line error message
    if (argc != 2 || argv[1] == NULL)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //convert and store argv in var
    string ks = argv[1];
    //check if only_digits
    if (only_digits(ks) == 1)
    {
        return 1;
    };
    //convert arg to int
    int k = atoi(argv[1]);
    //prompt user for plain text
    string pT = get_string("plaintext: ");
    //generate ciphertext
    rotate(pT, k);
}
//itterate over a string to check if it is decimal numbers only
int only_digits(string s)
{
    //might need to explicitly convert chars in string into int
    for (int i = 0; i < strlen(s); i++)
    {
        int sn = s[i];
        if (sn > 57 || sn < 48)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    return 0;
}

//convert plaintext into ciphertext
int rotate(string s, int k)
{
    string ns = s;
    for (int i = 0; i < strlen(ns); i++)
    {
        char p = ns[i];
        //rotate uppercase letters
        if (isalpha(p) && isupper(p))
        {
            int tp = p + (k % 26);
            ns[i] = (char) tp;
            if (tp > 90)
            {
                ns[i] = 64 + (tp % 90);
            }
        }
        //rotate lowercase letters
        if (isalpha(p) && islower(p))
        {
            int tp = p + (k % 26);
            ns[i] = (char) tp;
            if (tp > 122)
            {
                ns[i] = 96 + tp % 122;
            }
        }
    }
    printf("ciphertext: %s\n", ns);
    return 0;
}