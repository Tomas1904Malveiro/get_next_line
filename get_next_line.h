/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 10:23:30 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/11 17:44:09 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*read_and_stach(int fd, char *stash);
char	*extract_line(char **stash);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *str1, char *str2);
char	*ft_strchr(const char *s, int c);

#endif