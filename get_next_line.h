/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:15:43 by elchakir          #+#    #+#             */
/*   Updated: 2023/12/03 17:39:20 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 2
# endif
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
char	*ft_new_left_str(char *left_str);
char	*ft_get_line(char *left_str);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_strchr(char *s, int c);
char	*get_next_line(int fd);

#endif
