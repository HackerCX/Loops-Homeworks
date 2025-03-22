#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
     int progNum = 0;
    srand(time(0));  // Seed the random number generator
    progNum = rand() % 101;  // Generate a number between 0 and 100

    int yourNum = 0;

    while (1) {
        printf("Enter your number from 0 to 100 or 'q' to quit: ");
        if (scanf("%d", &yourNum) == 1) {
            if (yourNum < progNum) {
                printf("The entered number is smaller than the secret number.\n");
            } else if (yourNum > progNum) {
                printf("The entered number is larger than the secret number.\n");
            } else {
                printf("You won!!!! The secret number was %d\n", progNum);
                break;
            }
        } else {
           char quit[2];
            scanf("%s", quit);
            if (quit[0] == 'q' || quit[0] == 'Q') {
                printf("Game Over\n");
                break;
            } else {
                while (getchar() != '\n');
                printf("Please enter valid values.\n");
            }
        }
    }
    return 0;
}
