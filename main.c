#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	line = NULL;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		line = get_next_line(fd);
		while (line > 0)
		{
			printf("%s", line);
			free(line);
			line = get_next_line(fd);
		}
		close(fd);
	}
	else
		printf("\n");
	return (0);
}
