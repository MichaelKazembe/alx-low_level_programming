#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char *line = NULL;
	size_t n_size = 0;
	ssize_t read;

	while (1)
	{
		printf("$ ");
		fflush(stdout);
		read = getline(&line, &n_size, stdin);
	if (read == -1)
	{
		break;	
	}

	printf("%s", line);

	}

	free(line);

	return 0;
}
