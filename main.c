#include <stdio.h>
#include <string.h>
#include "parser.h"
#include "executor.h"
#include "builtins.h"

int main() {
    char input[1024];
    char *args[64];

    while (1) {
        printf("[mini-shell]$ ");
        fflush(stdout);

        if (fgets(input, sizeof(input), stdin) == NULL) break;

        parse_input(input, args);
        if (args[0] == NULL) continue;

        // 내장 명령어 처리
        if (handle_builtin(args)) {
            continue;
        }

        // 외부 명령어 실행
        execute_command(args);
    }

    return 0;
}