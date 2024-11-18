/* Snake, water, gun or rock, paper, scissors is a game most of us have played during school time.
   This is a C program capable of playing this game with you. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function Prototypes
int gameResults(char comp, char you);
char gameContinuation();

int main()
{
    // Initializing Variables
    // you for storing value of user-input character value
    // comp for storing random computer generated character value
    char you, comp;

    // Game continuation
    do
    {
        // User-Input
        printf("\nEnter 'r' for rock, 'p' for paper and 's' for scissors\n");
        scanf(" %c", &you);
        you = tolower(you); // set you to lowercase

        // If choice is yes
        if (you == 'r' || you == 'p' || you == 's')
        {
            srand(time(0));
            int number = rand() % 100; // Generate random numbers from 0 - 99

            // Set random characters for comp
            if (number < 33)
            {
                comp = 'r';
            }
            else if (number < 66)
            {
                comp = 'p';
            }
            else
            {
                comp = 's';
            }

            int result = gameResults(comp, you); // Stores returned result from function gameResults()

            // Game O/p
            printf("You chose '%c' and computer chose '%c'. ", you, comp);
            if (result == 0) // Draw
            {
                printf("It's a draw!\n");
            }
            else if (result == 1) // Win
            {
                printf("Congrats you won!\n");
            }
            else // Lose
            {
                printf("Oops computer won!\n");
            }
        }
        else
        {
            printf("\nInvalid Input! Please enter 'r', 'p', or 's'.\n");
        }
    } while (gameContinuation() == 'y'); // Function Call for choice

    printf("\nExiting game...\n"); // Game discontinuation message

    return 0;
}

// Function Descriptions
int gameResults(char comp, char you)
{
    // returns 1 for win, 0 for draw and -1 for lose
    // Conditions followed: rr, pp, ss
    if (comp == you)
    {
        return 0;
    }

    // Conditions followed:
    // Winning conditions: rp, ps, sr; Losing conditions: pr, sp, rs;
    else if ((comp == 'r' && you == 'p') || (comp == 'p' && you == 's') || (comp == 's' && you == 'r'))
    {
        return 1; // Win
    }
    else
    {
        return -1; // Lose
    }
}

char gameContinuation()
{
    char choice = 'y';
    do
    {
        // Game continuation statement I/p
        printf("\nDo you want to play again (y/n)?: ");
        scanf(" %c", &choice);

        choice = tolower(choice); // Convert choice to lowercase
    } while (choice != 'y' && choice != 'n');

    return choice;
}