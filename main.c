#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		fd2;
	char	*line;
	char	*line2;

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
	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		line = get_next_line(fd);
		line2 = get_next_line(fd2);
		while (line > 0)
		{
			printf("%s", line);
			free(line);
			line = get_next_line(fd);
		}
		while (line2 > 0)
		{
			printf("%s", line2);
			free(line2);
			line2 = get_next_line(fd2);
		}
		close(fd);
		close(fd2);
	}
	else
		printf("\n");
	return (0);
}
