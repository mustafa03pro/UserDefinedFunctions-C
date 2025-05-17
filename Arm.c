#include <stdio.h>
#include <stdbool.h>

// Function to count digits
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}


// Function to calculate power (base^exp)
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is Armstrong
bool isArmstrong(int n) {
    int numDigits = countDigits(n);
    int temp = n, sum = 0;
    
    while (temp > 0) {
        int digit = temp % 10;
        sum += power(digit, numDigits);
        temp /= 10;
    }

    return sum == n;
}

// Main function
int main() {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("Armstrong numbers between %d and %d are:\n", n1, n2);

    for (int i = n1; i <= n2; i++) {
        if (i >= 100 && i <= n2 && isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
