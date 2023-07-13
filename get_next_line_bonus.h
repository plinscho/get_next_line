/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plinscho <plinscho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:21:06 by plinscho          #+#    #+#             */
/*   Updated: 2023/07/13 13:50:00 by plinscho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_list
{
	char			*str_buff;
	struct s_list	*next;
}				t_list;

char	*get_next_line(int fd);
void	create_list(t_list **list, int fd);
void	append(t_list **list, char *buffer, int fd);
char	*get_line(t_list *list);
void	polish_list(t_list **list);

int		len_to_new_line(t_list *list);
void	copy_str(t_list *list, char *str);
int		found_new_line(t_list *list);
t_list	*find_last_node(t_list *list);
void	dealloc(t_list **list, t_list *clean_node, char *buff);

#endif
