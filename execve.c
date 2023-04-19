#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 0)
		return (-1);
	int val;
	char **args = &argv[1];

	val = execve(argv[1], args, NULL);

	return (0);
}
