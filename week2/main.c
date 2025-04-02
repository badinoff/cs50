#include <stdio.h>
#include <string.h>
#include "inputval.h"
#include "version.sh"

int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    printf("Scrabble v%d.%d\n", VERSION_MAJOR, VERSION_MINOR);
    
    char word1[50], word2[50];
    
    if (get_player_word(word1, 1)) return 1;
    if (get_player_word(word2, 2)) return 1;

    return 0;
}

