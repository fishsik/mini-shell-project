#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "builtins.h"

#define COLOR_RESET   "\033[0m"
#define COLOR_GREEN   "\033[32m"

int handle_builtin(char **args) {
    if (strcmp(args[0], "exit") == 0) {
        exit(0);
    }

    else if (strcmp(args[0], "cd") == 0) {
        // TODO: cd 명령어 구현
        // 예: chdir(args[1])
        if(chdir(args[1]) != 0)
        {
            perror("cd failed");
        }
        return 1;
    }

    else if (strcmp(args[0], "pwd") == 0) {
        char currentDirectory[PATH_MAX];
        if(getcwd(currentDirectory, sizeof(currentDirectory))==NULL)
        {
            perror("pwd failed");
        }

        printf("%s\n", currentDirectory);

        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "echo") == 0) {
        // TODO: 현재 경로 출력
        if(args[1] != NULL)
        {
            printf("%s", args[1]);

            for(int i = 2; args[i] != NULL; i++)
            {
                printf(" %s", args[i]);
            }
        }
        printf("\n");
        return 1;
    }

    else if (strcmp(args[0], "export") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "unset") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "env") == 0) {
        extern char **environ;
        for(int i = 0; environ[i] != NULL; i++)
        {
            printf("%s\n", environ[i]);
        }
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "clear") == 0) {
        // TODO: 현재 경로 출력
        system("clear");
        return 1;
    }

    else if (strcmp(args[0], "help") == 0) {
        // TODO: 현재 경로 출력
        printf("Built-in commands:\n");
        printf("  " COLOR_GREEN "%-10s" COLOR_RESET " - %s\n", "cd[dir]", "Change current directory");
        printf("  " COLOR_GREEN "%-10s" COLOR_RESET " - %s\n", "pwd", "Print current directory");
        printf("  " COLOR_GREEN "%-10s" COLOR_RESET " - %s\n", "echo[text]", "Print text");
        printf("  " COLOR_GREEN "%-10s" COLOR_RESET " - %s\n", "env", "Print environment variables");
        printf("  " COLOR_GREEN "%-10s" COLOR_RESET " - %s\n", "clear", "clear the screen");
        printf("  " COLOR_GREEN "%-10s" COLOR_RESET " - %s\n", "help", "show this help message");
        printf("  " COLOR_GREEN "%-10s" COLOR_RESET " - %s\n", "exit", "exit the shell");
        return 1;
    }

    else if (strcmp(args[0], "history") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "alias") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "unalias") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "which") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "type") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "read") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "source") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "jobs") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "fg") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "bg") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "kill") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    else if (strcmp(args[0], "ulimit") == 0) {
        // TODO: 현재 경로 출력
        return 1;
    }

    return 0;  // 내장 명령어 아님
}