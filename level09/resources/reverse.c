#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	FILE *file = fopen(argv[1], "r");
	char *line = NULL;
	size_t len = 0;
	int read;
	
	read = getline(&line, &len, file);
	
	for (int i = 0; i < read -1; i++)
		printf("%c", line[i] - i);
	free(line);
	fclose(file);
}
