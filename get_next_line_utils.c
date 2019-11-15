/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamghoug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:15:49 by bamghoug          #+#    #+#             */
/*   Updated: 2019/11/14 11:04:44 by bamghoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	d = dst;
	s = src;
	if (d == s)
		return (dst);
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

char	*ft_strdup(char *s1)
{
	char	*p;
	int		i;

	i = ft_strlen(s1);
	p = (char*)malloc((i + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p = ft_memcpy(p, s1, (i + 1));
	return (p);
}

char	*after_n(char *s)
{
	char	*res;
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			s[i] = '\0';
			res = ft_strdup(&(s[i + 1]));
			free(s);
			return (res);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	int		i;
	int		j;

	if (s1 == NULL)
		return (s2);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	p = (char*)malloc((j + i + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i] != '\0')
		p[i] = s1[i];
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
