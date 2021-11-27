/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:48:11 by mamaurai          #+#    #+#             */
/*   Updated: 2021/11/26 12:54:50 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char	*ft_get_save(char *str);
char	*get_next_line(int fd);
int		ft_is_line(char c, char *set);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *src);

#endif
