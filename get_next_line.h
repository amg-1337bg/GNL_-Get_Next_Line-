/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamghoug <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 11:58:37 by bamghoug          #+#    #+#             */
/*   Updated: 2019/11/14 12:26:08 by bamghoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int		check(char *string);
char	*before_n(char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*after_n(char *s);
size_t	ft_strlen(const char *s);
int		get_next_line(int fd, char **line);
int		work_todo(int fd, char *buf, char **line);
int		rest_check(char *res, char **line);

#endif
