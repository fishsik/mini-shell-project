#include <string.h>
#include "parser.h"

void parse_input(char *input, char **args) {
    int i = 0;
    args[i] = strtok(input, " \t\n");
    while (args[i] != NULL) {
        i++;
        args[i] = strtok(NULL, " \t\n");
    }
}
