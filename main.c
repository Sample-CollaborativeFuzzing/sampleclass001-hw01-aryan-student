// ***
// *** DO NOT modify this file
// ***

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void print(char * filename);

int main(int argc, char * * argv)
{
    // read input file
    if (argc != 2)
    {
        return EXIT_FAILURE;
    }

    print(argv[1]);

    return EXIT_SUCCESS;
}
