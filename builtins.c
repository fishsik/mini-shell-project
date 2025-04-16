#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "builtins.h"

int handle_builtin(char **args) {
    if (strcmp(args[0], "exit") == 0) {
        exit(0);
    }

    if (strcmp(args[0], "cd") == 0) {
        // TODO: cd 명령어 구현
        // 예: chdir(args[1])
        return 1;
    }

    if (strcmp(args[0], "pwd") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    return 0;  // 내장 명령어 아님
}
