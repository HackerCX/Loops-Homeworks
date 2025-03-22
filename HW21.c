#include <stdio.h>

int main()
{
    int n = 0;
    printf("Please enter value for n");
    scanf("%d",&n);
    int num = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            if(num % 2==0){
            printf("%d",1);
            }else{
                printf("%d",0);
            }
            num++;
        }
        printf("\n");
    }
    return 0;
}
