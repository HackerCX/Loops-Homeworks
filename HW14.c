#include <stdio.h>

int main()
{
    int num = 0;
    long result = 1;
    
    do{
    printf("Enter a index of number of fibonacci sequence: ");
    scanf("%d", &num);
    }while(num<0);

    if (num == 0){
        result = 0;    
    }
    if (num == 1){
        result = 1;
    }
    long a = 0, temp = 0;
    for (int i = 2; i <= num; i++) {
        temp = a + result;
        a = result;
        result = temp;
    };
    printf("%ld", result);
    return 0;
}
