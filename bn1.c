#include <stdio.h>

int main()
{
    int n, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("invalid number, Enter a positive integer");
        return 0;
    }

    while(n > 0)
    {
        int r = n % 2;
        binary = binary + r * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary: %d", binary);

    return 0;
}