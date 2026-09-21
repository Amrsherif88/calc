#include<stdio.h>
#include<cs50.h>
int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");
    char operation = get_char("+, -, *, / : ");
    if (operation == '+')
    {
        printf("%0.2f\n", x + y);
    }
    else if (operation == '-')
    {
        printf("%0.2f\n", x - y);
    }
    else if (operation == '*')
    {
        printf("%0.2f\n", x * y);
    }
    else if (operation == '/')
    {
        printf("%0.2f\n", x / y);
    }
    else
    {
        printf("Invalid operation\n");
    }
}
