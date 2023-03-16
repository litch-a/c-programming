#include <stdio.h>
/**
 *multiply- function that multiplies two integers
 *Return the result
*/
    int multiply(int x, int y)
    {
        int result;
        result=x*y;
        return result;
    }
int main(void)
{
    int result;
    result = multiply(3,5);
    printf("The multiplication of two integers is: %d\n", result);
}