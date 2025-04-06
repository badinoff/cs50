#include <cs50.h>
#include <stdio.h>

string get_player_word(int player_num);

int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void) {
    
    string word1 = get_player_word(1), word2 = get_player_word(2);

}

string get_player_word (int player_num){

   return  get_string("Player %d: ", player_num);

}