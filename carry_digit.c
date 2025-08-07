#include <stdio.h>

int NumberofCarries(int num1, int num2) {
    int carry = 0, count = 0;
    while (num1 > 0 || num2 > 0) {
        int d1 = num1 % 10;
        int d2 = num2 % 10;
        int sum = d1 + d2 + carry;
        if (sum > 9) {
            carry = cary +1;
            count++;
        } else {
            carry = 0;
        }
        num1 /= 10;
        num2 /= 10;
    }
    return count;
}

int main() {
    int num1, num2, count=1;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int carries = NumberofCarries(num1, num2);  // Fixed variable name
    printf("Number of carries generated: %d\n", carries);
    return 0;
}
