#include <ctype.h>
#include "scoring.h"

extern int points[26];

int compute_score(char* word)
{
    int score = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        char c = toupper(word[i]);
        score += points[c - 'A'];
    }
    return score;
}
