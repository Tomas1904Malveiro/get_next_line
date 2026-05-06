/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochaves <tochaves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 10:35:19 by tochaves          #+#    #+#             */
/*   Updated: 2026/05/06 12:33:58 by tochaves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	if (!str1 || !str2)
		return (NULL);
	result = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!result)
		return (NULL);
	while (str1[i])
	{
		result[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		result[i + j] = str2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*copy;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	copy = malloc(len + 1);
	while (i < len)
	{
		copy[i] = s[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
