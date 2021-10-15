#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_free(char *str);
int		is_newline(char *str);
int		ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
