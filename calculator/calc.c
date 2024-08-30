#include <stdio.h>
// take something return nothing //
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Cannot divide by zero!\n");
        return 0;
    }
}
int mod(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        printf("Cannot find modulus by zero!\n");
        return 0;
    }
}

int main()
{
    int choice;
    int num1, num2;

    while (1)
    {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }
        if (choice >= 1 && choice <= 5)
        {
            printf("Enter the first number: ");
            scanf("%d", &num1);

            printf("Enter the second number: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is: %d\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is: %d\n", num1, num2, sub(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is: %d\n", num1, num2, mul(num1, num2));
                break;
            case 4:
                printf("Division of %d and %d is: %d\n", num1, num2, div(num1, num2));
                break;
            case 5:
                printf("Modulus of %d and %d is: %d\n", num1, num2, mod(num1, num2));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }
    return 0;
}

