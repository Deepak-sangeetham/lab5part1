/* Modify  programming project 16 chapter 8 so that it includes the following functions :
    void read_word(int counts[26]);
    bool equal_array(int counts[26]);

    main will call read_word twice, once for each of the two words entered by the user. As it reads a word, raed_word will use the word sto update the counts array, as described in the original project.(main will declare two arrays, one for each word. These arrays are used to tack how many times each letter occurs in the words.)main will then call equal_array,passing it into the two arrays
    equal_array will return true if the elements in the two arrays are identcial(indicating that the words are anagrams) 
    and fale otherwise.
*/

#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {

    int i,
        counts[26] = {0},
        counts2[26] = {0};
    
    read_word(counts);
    read_word(counts2);


    if (equal_array(counts, counts2)) 
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[26]){

    char c;


    printf("Enter word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(c))
            counts[toupper(c) - 'A']++;
    }
}

bool equal_array(int counts1[26], int counts2[26]){

    int i;

    for (i = 0; i < 26; i++){
        if (counts1[i] != counts2[i]) {
            return false;
        }
    }
    return true;

}
