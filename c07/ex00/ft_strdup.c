/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:34:55 by asodor            #+#    #+#             */
/*   Updated: 2023/10/05 23:55:27 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*str_cpy(char *str, char *dest)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*dest;

	i = len(src);
	dest = (char *)malloc(sizeof(char) * i);
	if (!(dest))
		return (NULL);
	return (str_cpy(src, dest));
}
