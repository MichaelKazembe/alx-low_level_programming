#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
/**
 * getppid - get parent process id
 * Return: void
*/
int main(void)
{
    pid_t ppid;

    ppid = getppid();
    printf("Parent process ID: %u\n", ppid);


    return (0);

}
