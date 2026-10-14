#include <stdio.h>
#include <string.h>

int main() {
    //Define strings
    char name[] = "David Luque";
    char town[] = "Salvador";

    //Create a buffer large enough to hold a sentence
    char sentence[200] = "";

    //Build the sentence step by step using strcat()
    //sentence becomes:
    strcat(sentence, name);
    strcat(sentence," operates in");
    strcat(sentence, town);
    strcat(sentence, ".");

    //Print the constructed sentences
    printf("%s\n", sentence);

    return 0;
}