/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:01:08 by nmunir            #+#    #+#             */
/*   Updated: 2023/09/21 15:30:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_read_string(int fd, char *rem_string)
{
	char	*buffer;
	int		read_byt;

	read_byt = 1;
	buffer = (char *)malloc((long)(BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (read_byt != 0 && !is_include_nl(rem_string, '\n'))
	{
		read_byt = read(fd, buffer, BUFFER_SIZE);
		if (read_byt < 0 || !buffer[0])
		{
			free(buffer);
			free(rem_string);
			return (NULL);
		}
		buffer[read_byt] = '\0';
		rem_string = ft_strjoin_gnl(rem_string, buffer);
	}
	free(buffer);
	return (rem_string);
}

char	*get_next_line(int fd)
{
	static char	*rem_string;
	char		*res;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd >= FD_MAX)
		return (NULL);
	rem_string = get_read_string(fd, rem_string);
	if (!rem_string)
		return (NULL);
	res = get_first_line(rem_string);
	rem_string = get_new_rem_str(rem_string);
	return (res);
}
