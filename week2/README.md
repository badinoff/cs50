# Scrabble (Week 2)
A simple Scrabble game that takes two words, scores them, and declares a winner or tie. Built for CS50 Week 2 (arrays) problem set, using modular C code.
cs50.h was not used in this code. Classic C functions only.

It's definitely an overkill implementation, but I did it on purpose to enhance my learning experience and lay path for hypothetical scaling and function reuse.


## Flow 

Two players participate. Each enters an arbitrary word. Each letter of the word is scored according to points that each letter is worth (see array in main.c). 
The program calculated the score for each player's word, compared the does and declared a winner. 

ca50 problem sweet link: 

https://cs50.harvard.edu/x/2025/psets/2/scrabble/

## Features
- Input validation for letters only collected from 2 players
- Scores words using standard cs50 Scrabble point values.
- Compares scores and prints the result.

## Files
- `main.c`: Entry point and game logic.
- `inputval.c`: Input capture and validation logic.
- `inputval.h`: Header for input functions.
- `scoring.c`: Scoring logic for words.
- `scoring.h`: Header for scoring functions.
- `version.h`: Version tracking.

## Build
```bash
gcc -o scrabble main.c inputval.c scoring.c -Wall
./scrabble
