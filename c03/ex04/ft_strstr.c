/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:54:50 by asodor            #+#    #+#             */
/*   Updated: 2023/09/24 20:38:31 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (*str)
	{
		while (str[i] == to_find[i] && str[i] != '\0' && to_find[i] != '\0')
			i++;
		if (to_find[i] == '\0')
			return (str);
		i = 0;
		str++;
	}
	return (0);
}
