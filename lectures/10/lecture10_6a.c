#include <stdio.h>
#include <stdlib.h>

int main( ) {
    FILE *f;
    char *buffer;
    size_t bufsize = 64;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if ( buffer == NULL ){
        perror("Unable to allocate buffer\n");
        exit(1);
    }
    f = fopen("lecture10_1.c","r");
    characters = getline(&buffer, &bufsize, f);
    printf("%zu characters were read.\n", characters);
    printf("Η πρώτη γραμμή του αρχείου είναι: '%s'\n", buffer);

    return 0;
}

/* gcc lecture10_6a.c -o lecture10_6a  */
