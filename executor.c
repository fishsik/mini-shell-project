#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include "executor.h"

void execute_command(char **args) {
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        return;
    } else if (pid == 0) {
        // 자식 프로세스
        if (execvp(args[0], args) < 0) {
            perror("exec failed");
            exit(EXIT_FAILURE);
        }
    } else {
        // 부모 프로세스
        wait(NULL);
    }
}