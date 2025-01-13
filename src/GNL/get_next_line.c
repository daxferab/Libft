/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daxferna <daxferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:43:01 by daxferab          #+#    #+#             */
/*   Updated: 2025/01/13 22:23:28 by daxferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_getline(char *str)
{
	char	*line;
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = str[i];
	i++;
	line[i] = '\0';
	return (line);
}

char	*ft_updatestatic(char *str)
{
	char	*remainder;
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	remainder = ft_calloc((ft_strlen(str) - i + 1), sizeof(char));
	if (!remainder)
		return (0);
	if (str[i] == '\n')
		i++;
	j = 0;
	while (str[i])
	{
		remainder[j] = str[i];
		i++;
		j++;
	}
	return (free(str), remainder);
}

char	*ft_read(int fd, char *remainder, char *buffer)
{
	ssize_t		bytesread;

	bytesread = 1;
	while (!ft_findnl(remainder) && bytesread > 0)
	{
		bytesread = read(fd, buffer, BUFFER_SIZE);
		if (bytesread <= 0 && remainder[0] == '\0')
		{
			free(buffer);
			buffer = NULL;
			free(remainder);
			remainder = NULL;
			return (NULL);
		}
		else if (bytesread <= 0)
			break ;
		buffer[bytesread] = '\0';
		remainder = ft_strjoin_gnl(remainder, buffer);
		if (!remainder)
			free(buffer);
	}
	return (remainder);
}

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	if (!remainder)
		remainder = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!remainder)
		return (free(buffer), NULL);
	remainder = ft_read(fd, remainder, buffer);
	if (!remainder)
		return (NULL);
	line = ft_getline(remainder);
	if (!line)
		return (free(buffer), free(remainder), NULL);
	remainder = ft_updatestatic(remainder);
	if (!remainder)
		return (free(buffer), free(line), NULL);
	return (free (buffer), buffer = NULL, line);
}
