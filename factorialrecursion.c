// factorial
#include <stdio.h>
 long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    printf("SADIKSHYA SUBEDI\n");
	int n;
    long int result;
    printf("Enter the number :");
    scanf("%d", &n);
    result = factorial(n);
    printf("The factorial of %d is %d", n, result);
}

