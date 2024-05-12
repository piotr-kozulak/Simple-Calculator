#include <iostream>
#include <cstring>

void usage(char *programName) {
    printf("Usage: %s number1 operation number\n", programName);
    printf("Available operations:\n");
    printf("\tadd\n");
    printf("\tsub\n");
    printf("\tmul\n");
    printf("\tdiv\n");
    printf("\n");
}
int main (int argc, char *argv[]){


usage (argv[0]);
    return 0;
}