/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:48:14 by mamaurai          #+#    #+#             */
/*   Updated: 2021/11/26 13:08:24 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*mem;
	long		len;
	char		*line;

	if (BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	buffer = malloc(sizeof(char) * ((long)BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	len = 1;
	while (!ft_is_line('\n', mem) && len)
	{
		len = read(fd, buffer, BUFFER_SIZE);
		if (len <= 0)
			break ;
		buffer[len] = '\0';
		mem = ft_strjoin(mem, buffer);
	}
	line = ft_strdup(mem);
	mem = ft_get_save(mem);
	return (free(buffer), line);
}
