#include <cs50.h>
#include <stdio.h>

int main(void)
{
//get the input
int height; 
    do
    {
        height = get_int("height: ");
    }
    while (height<1 || height>8);
    
//making the pyramid 

    for (int i = 0; i < height; i++)
    {
        
        for (int k = height - 1 ; k > i ; k--)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        
        printf("\n");
        
    }
}