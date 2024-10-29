# Rock, Paper, Scissors Game

This is a simple C program that lets the user play the classic **Rock, Paper, Scissors** game against the computer. The program checks for valid player input, generates random moves for the computer, and determines the winner according to standard rules. The user can choose to continue playing or quit after each round.

## How to Play
1. When prompted, enter your move:
   - `r` for rock
   - `p` for paper
   - `s` for scissors
2. The computer will make a random move.
3. The winner is determined by the classic rules:
   - Rock beats scissors
   - Scissors beat paper
   - Paper beats rock
4. After each game, you can press 'q' to quit or any other key to play again.

## Code Structure
- `GetPlayerMove()`: Prompts the player for a move and validates input. If the input is invalid, it re-prompts until a valid choice is entered.
- `GetComputerMove()`: Generates a random move for the computer.
- `PlayRockPaperScissorsGame()`: Retrieves moves from both the player and computer, determines the winner, and displays the result.
- `main()`: Controls the game loop, allowing the player to continue playing or quit.

## Compilation
To compile the code, open a terminal in the project directory and run:
```bash
gcc -o rock_paper_scissors game.c


./rock_paper_scissors
Welcome to Rock, Paper, Scissors! Press 'q' to quit or any other key to continue:
x
Enter your move (r for rock, p for paper, s for scissors): r
Computer's move: s
You win!
Press 'q' to quit or any other key to continue:
x
Enter your move (r for rock, p for paper, s for scissors): p
Computer's move: r
You win!
Press 'q' to quit or any other key to continue:
q
Bye Bye!

