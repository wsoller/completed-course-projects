#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    //get user input
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);
    for (int i = 0; i < height; i++)
    {
        int rowInverse = height - i;
        //print spaces before hashes
        for (int z = 1; z < rowInverse; z++)
        {
            printf(" ");
        }
        //print first triangle
        for (int a = 0; a <= i; a++)
        {
            printf("#");
        }
        //space between triangles
        printf("  ");
        //second triangle
        for (int b = 0; b <= i; b++)
        {
            printf("#");
        }
        //new line
        printf("\n");
    }
}