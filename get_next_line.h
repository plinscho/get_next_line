//header

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
#endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_list
{
	char *str_buff;
	struct s_list *next;
}				t_list;

char	*get_next_line(int fd);
void	create_list(t_list **list, int fd);
void	append(t_list **list, char *buffer);
char	*get_line(t_list *list);
void	polish_list(t_list **list);

int		len_to_new_line(t_list *list);
void	copy_str(t_list *list, char *str);
int		found_new_line(t_list *list);
t_list	*find_last_node(t_list *list);
void	dealloc(t_list **list, t_list *clean_node, char *buff);

#endif
