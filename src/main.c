#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
    unsigned int sleep_seconds = 0;
    if (argc > 1) {
        sleep_seconds = atoi(argv[1]);
    }

    sleep(sleep_seconds);

    char *array = (char *) malloc(-1);
    array[0] = 'A';
    *((int*) 0) = 69;


    return 0;
}