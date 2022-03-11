#include <stdio.h>

int main() {
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */

 char i;
 
    printf("Capital (upper) case characters:\n");
    for(i='A'; i<='Z'; i++)
        printf("%c ",i);
 
    
    for(i='a'; i<='z'; i++)
        printf("%c ",i);
 
 
    return 0;
}
