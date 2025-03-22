#include <stdio.h>

int main()
{
    int n = 0;
    printf("Please enter value for n");
    scanf("%d",&n);
    int currentNumber= 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            if(currentNumber <= n){
                printf("%d",currentNumber++);
            }
        }
        printf("\n");
    }
    return 0;
}
