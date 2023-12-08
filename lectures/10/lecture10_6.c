#include <stdio.h>
#include <stdlib.h>

int main( ) {
    char *buffer;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * sizeof(char));
    if ( buffer == NULL ){
        perror("Unable to allocate buffer\n");
        exit(1);
    }

    printf("Type something: ");
    characters = getline(&buffer, &bufsize, stdin);
    printf("%zu characters were read.\n", characters);
    printf("You typed: '%s'\n", buffer);

    return 0;
}

/* gcc lecture10_6.c -o lecture10_6  */
