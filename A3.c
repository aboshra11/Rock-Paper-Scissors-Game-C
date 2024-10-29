#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char GetPlayerMove() {
    char choice;
    printf("Enter your move (r for rock, p for paper, s for scissors): ");
    while(1) {
        scanf(" %c", &choice); // Use space before %c to skip any whitespace
        if(choice == 'r' || choice == 'p' || choice == 's') {
            return choice;
        } else {
            printf("Invalid move. Enter your move (r for rock, p for paper, s for scissors): ");
        }
    }
}

char GetComputerMove() {
    char moves[3] = {'r', 'p', 's'};
    return moves[rand() % 3];
}

void PlayRockPaperScissorsGame() {
    char playerMove = GetPlayerMove();
    char computerMove = GetComputerMove();

    printf("Computer's move: %c\n", computerMove);

    if(playerMove == computerMove) {
        printf("It's a tie!\n");
    } else if((playerMove == 'r' && computerMove == 's') ||
              (playerMove == 'p' && computerMove == 'r') ||
              (playerMove == 's' && computerMove == 'p')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    char continueGame;

    printf("Welcome to Rock, Paper, Scissors! Press 'q' to quit or any other key to continue:\n");
    srand(time(NULL)); // Seed the random number generator

    while(1) {
        scanf(" %c", &continueGame);
        if(continueGame == 'q') {
            printf("Bye Bye!\n");
            break;
        } else {
            PlayRockPaperScissorsGame();
            printf("Press 'q' to quit or any other key to continue:\n");
        }
    }

    return 0;
}

