#include <stdio.h>


int
main(){
    char Foo[12] = {'f', 'o', 'o', '\n', 'b', 'a', 'r', '\n', 'b', 'a', 'z',
        '\n'};
    printf("1D array:\n");

    for (int i = 0; i < 12; i++){
        printf("%c", Foo[i]);
    };

    char Bar[3][4] = {"foo", "bar", "baz"};
    printf("2D array:\n");

    for (int j = 0; j < 3; j++){
        printf("%s\n", Bar[j]);
    };

    char *Baz[3] = {"foo", "bar", "baz"};
    printf("Pointer array:\n");

    for (int k = 0; k < 3; k++) {
        printf("%s\n", Baz[k]);
    };
}
