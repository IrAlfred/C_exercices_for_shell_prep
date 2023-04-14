#include <stdio.h>
#include <unistd.h>

/**
 * main - Print the ppid (parent process id)
 *
 * Returns: always 0.
 */
int main(void)
{
	pid_t ppid;
	ppid = getppid();
	printf("%u\n", ppid);
	return (0);
}
