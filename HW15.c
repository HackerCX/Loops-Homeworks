#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int s = 0;
    for(int i = 1; i < sqrt(num); ++i){
        if(num % i == 0){
            s++;
        }
    }
    if(s != 2){
        printf("Parz tiv che");
    }else{
        printf("Tivy parz e");
    }
    return 0;
}
