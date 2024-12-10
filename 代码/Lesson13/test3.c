/*
mini_shell实现
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define CMD_MAX 128
#define ARGV_MAX 64

int main()
{
    char command[CMD_MAX];
    char* argv[ARGV_MAX];

    for (;;)
    {
        // 1. 输出命令行
        printf("[wsl@MyLoveIsGone20011008 mini_shell]$ ");
        fflush(stdout);

        // 2. 获取命令字符串
        fgets(command, CMD_MAX, stdin);
        command[strlen(command) - 1] = '\0';

        // 3. 解析命令字符串
        argv[0] = strtok(command, " ");
        int i = 1;
        while (argv[i] = strtok(NULL, " "))
            ++i;

        // 4. 父进程对内建命令执行
        if (strcmp(argv[0], "cd") == 0)
        {
            if (argv[1] != NULL)
                chdir(argv[1]);
            continue;
        }

        // 5.创建子进程通过程序替换对第三方命令执行
        if (fork() == 0)
        {
            execvp(argv[0], argv);
            exit(1);
        }

        // 6. 父进程等待
        int status = 0;
        waitpid(-1, &status, 0);
        printf("exit code: %d\n", (status >> 8) & 0xFF);
    }

    return 0;
}