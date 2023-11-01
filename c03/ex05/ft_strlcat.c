/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:39:42 by asodor            #+#    #+#             */
/*   Updated: 2023/09/26 00:41:11 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	l;
	unsigned int	i;
	unsigned int	j;

	dest_len = len(dest);
	src_len = len(src);
	l = dest_len + src_len;
	i = dest_len;
	j = 0;
	if (size <= dest_len)
		return (src_len + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (l);
}
