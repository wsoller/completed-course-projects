#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    //take Player 1 Input
    string Player1 = get_string("Player 1: ");
    //take Player 2 Input
    string Player2 = get_string("Player 2: ");
    //store score
    int P1 = 0;
    int P2 = 0;
    //Sum of Player 1 string characters
    for (int i = 0; i < strlen(Player1); i++)
    {
        char curN = Player1[i];
        //check if LETTERS with score of 1, add score
        //check if curN = UPPERCASE letters that give 1 score, give 1 score
        if (curN == 65 || curN == 69 || curN == 73 || curN == 76 || curN == 78 || curN == 79 || curN == 82 || curN == 83 || curN == 84 || curN == 85)
        {
            P1 = P1 + 1;
        }
        //check if curN = lowercase letters that give 1 score, give 1 score
        if (curN == 97 || curN == 101 || curN == 105 || curN == 108 || curN == 110 || curN == 111 || curN == 114 || curN == 115 || curN == 116 || curN == 117)
        {
            P1 = P1 + 1;
        }
        //SCORE 2 D, G
        if (curN == 68 || curN == 71)
        {
            P1 = P1 + 2;
        }
        if (curN == 100 || curN == 103)
        {
            P1 = P1 + 2;
        }
        //SCORE 3 B, C, M, P
        if (curN == 66 || curN == 67 || curN == 77 || curN == 80)
        {
            P1 = P1 + 3;
        }
        if (curN == 98 || curN == 99 || curN == 109 || curN == 112)
        {
            P1 = P1 + 3;
        }
        //SCORE 4 F, H, V, W, Y
        if (curN == 70 || curN == 72 || curN == 86 || curN == 87 || curN == 89)
        {
            P1 = P1 + 4;
        }
        if (curN == 102 || curN == 104 || curN == 118 || curN == 119 || curN == 121)
        {
            P1 = P1 + 4;
        }
        //SCORE 5 K
        if (curN == 75 || curN == 107)
        {
            P1 = P1 + 5;
        }
        //SCORE 8 J, X
        if (curN == 74 || curN == 88 || curN == 106 || curN == 120)
        {
            P1 = P1 + 8;
        }
        //SCORE 10 Q, Z
        if (curN == 81 || curN == 90 || curN == 113 || curN == 122)
        {
            P1 = P1 + 10;
        }
    }
    for (int i = 0; i < strlen(Player2); i++)
    {
        char curN = Player2[i];
        //check if LETTERS with score of 1, add score
        //check if curN = UPPERCASE letters that give 1 score, give 1 score
        if (curN == 65 || curN == 69 || curN == 73 || curN == 76 || curN == 78 || curN == 79 || curN == 82 || curN == 83 || curN == 84 || curN == 85)
        {
            P2 = P2 + 1;
        }
        //check if curN = lowercase letters that give 1 score, give 1 score
        if (curN == 97 || curN == 101 || curN == 105 || curN == 108 || curN == 110 || curN == 111 || curN == 114 || curN == 115 || curN == 116 || curN == 117)
        {
            P2 = P2 + 1;
        }
        //SCORE 2 D, G
        if (curN == 68 || curN == 71)
        {
            P2 = P2 + 2;
        }
        if (curN == 100 || curN == 103)
        {
            P2 = P2 + 2;
        }
        //SCORE 3 B, C, M, P
        if (curN == 66 || curN == 67 || curN == 77 || curN == 80)
        {
            P2 = P2 + 3;
        }
        if (curN == 98 || curN == 99 || curN == 109 || curN == 112)
        {
            P2 = P2 + 3;
        }
        //SCORE 4 F, H, V, W, Y
        if (curN == 70 || curN == 72 || curN == 86 || curN == 87 || curN == 89)
        {
            P2 = P2 + 4;
        }
        if (curN == 102 || curN == 104 || curN == 118 || curN == 119 || curN == 121)
        {
            P2 = P2 + 4;
        }
        //SCORE 5 K
        if (curN == 75 || curN == 107)
        {
            P2 = P2 + 5;
        }
        //SCORE 8 J, X
        if (curN == 74 || curN == 88 || curN == 106 || curN == 120)
        {
            P2 = P2 + 8;
        }
        //SCORE 10 Q, Z
        if (curN == 81 || curN == 90 || curN == 113 || curN == 122)
        {
            P2 = P2 + 10;
        }
    }

    //Declare Winner/Loser/Tie
    if (P1 > P2)
    {
        printf("Player 1 wins!\n");
    }
    if (P2 > P1)
    {
        printf("Player 2 wins!\n");
    }
    if (P1 == P2)
    {
        printf("Tie!\n");
    }
}
