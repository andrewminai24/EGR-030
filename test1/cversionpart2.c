#include <stdio.h>
#include <cstdlib>

using namespace std;

int main()

{

    int sticks, remove_sticks, turn = 1, choice, round = 0;

    printf("Enter the number of sticks in the game: ");

    scanf("%d", &sticks);

    printf("Which move you want to make (1 for first move, 2 for second move)? ");

    scanf("%d", &choice);

    if (choice == 1) //human start the game if he chooses 1

    {

        printf("\nHuman starts\n");

        printf("Enter the number of sticks you want to remove : ");

        scanf("%d", &remove_sticks);

        printf("Round %d, %d sticks at start, human took ", round, sticks);

        round++;

        sticks -= remove_sticks;

        printf("%d, so %d stick remain", remove_sticks, sticks);
    }

    else if (choice == 2) //computer start the game if he chooses 1

    {

        printf("\nComputer starts\n");
    }

    do
    {

        if (turn == 1)
        {

            printf("Round %d, %d sticks at start, computer took ", round, sticks);

            if (sticks > 1)

            {

                remove_sticks = (rand() % 2) + 1; // using random function to generate either 1 or 2
            }

            else
            {

                remove_sticks = 1;
            }

            round++;

            sticks -= remove_sticks;

            printf("%d, so %d stick remain\n", remove_sticks, sticks);

            turn = 2;
        }

        else
        {

            printf("Enter the number of sticks you want to remove : ");

            scanf("%d", &remove_sticks);

            if (remove_sticks > 2) // to check if human is entering number more that 2

            {

                printf("Wrong number. Can remove only 1 or 2 sticks \nSkipping turn\n");

                remove_sticks = 0;
            }

            printf("\nRound %d, %d sticks at start, human took ", round, sticks);

            round++;

            sticks -= remove_sticks;

            printf("%d, so %d stick remain\n", remove_sticks, sticks);

            turn = 1;
        }

    } while (sticks != 0);

    if (turn == 2)

        printf("Computer wins!\n");

    else

        printf("Human wins!\n");

    return 0;
}