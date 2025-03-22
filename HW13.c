#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    printf("Enter Number: ");
    scanf("%d", &num);

    originalNum = num;


    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;                      
    }

    if (originalNum == reversedNum) {
        printf("%d Number is palindrome\n", originalNum);
    } else {
        printf("%d Number isn't palindrome\n", originalNum);
    }

    return 0;
}
