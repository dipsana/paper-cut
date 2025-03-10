/* Snake, water, gun or rock, paper, scissors is a game most of us have played during school time.
   This is a C program capable of playing this game with you. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function Prototypes
char gameResults(char you);
char gameContinuation();

int main()
{
    srand(time(0)); // Seed RNG once at start
    char you;       // User-I/p

    // Replay on yes
    do
    {
        // User-I/p with validation
        printf("\nEnter 'r' for rock, 'p' for paper and 's' for scissors\n");
        while (scanf(" %c", &you) != 1 || (you != 'r' && you != 'p' && you != 's'))
        {
            // Clear input buffer
            char ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("\nInvalid Entry! Please enter 'r', 'p' or 's'!\n");
        }
        you = tolower(you); // set you to lowercase

        gameResults(you); // game o/p

    } while (gameContinuation() == 'y'); // game continuation call
    printf("\nExiting game...\n");
    return 0;
}

// Function Descriptions:
// Who won and game o/p?
char gameResults(char you)
{
    // Generate a random move for comp
    char comp;
    int randNo = rand() % 100; // Returns: A random integer in the range [0, 99]
    if (randNo < 33)
        comp = 'r';
    else if (randNo < 66)
        comp = 'p';
    else
        comp = 's';

    printf("You chose '%c' and computer chose '%c'. ", you, comp);

    // Draw: rr, pp, ss
    if (comp == you)
        printf("It's a draw!\n");
    // Win: rp, ps, sr
    else if ((comp == 'r' && you == 'p') || (comp == 'p' && you == 's') || (comp == 's' && you == 'r'))
        printf("Congrats you won!\n");
    // Lose: pr, sp, rs
    else
        printf("Oops computer won!\n");

    return comp; // For Debugging
}

// Replay? (Y/N) prompt
char gameContinuation()
{
    char choice = 'y';
    do
    {
        printf("\nDo you want to play again (y/n)?: ");
        scanf(" %c", &choice);
        choice = tolower(choice);
    } while (choice != 'y' && choice != 'n');
    return choice;
}