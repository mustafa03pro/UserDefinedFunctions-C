#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    
    // Count the number of digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of the digits raised to the power of the number of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

// Function to print Armstrong numbers in a range
void ArmstrongRange(int n1, int n2) {
    printf("The Armstrong numbers between %d and %d are:\n", n1, n2);
    for (int n = n1; n <= n2; n++) {
        if (isArmstrong(n)) {
            printf("%d ", n);
        }
    }
    printf("\n");
}

int main() {
    int n1, n2;
    printf("Enter the lower bound: ");
    
    scanf("%d", &n1);
    printf("Enter the upper bound: ");
    scanf("%d", &n2);
    if(n1<0||n2<0){
        printf("Negative value not allowed.");
        return 0;

    }
    //printf("Enter the upper bound: ");
    //scanf("%d", &n2);

    ArmstrongRange(n1, n2);

    return 0;
}
