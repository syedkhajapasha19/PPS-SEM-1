#include <stdio.h>

// Recursive function to find GCD of two numbers
int findGCD(int a, int b)
 {
// Base case: if b becomes 0, the GCD is a
    if (b == 0)

        {
        return a;
    }
// Recursive case: call the function with b and the remainder of a divided by b
    return findGCD(b, a % b);
}

int main() {
    int num1, num2, gcd;

    // Ask user for input
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter integers only.\n");
        return 1;
    }

    // Call the recursive function
    gcd = findGCD(num1, num2);

    // Print the result
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
