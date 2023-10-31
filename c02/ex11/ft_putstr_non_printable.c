/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:09:25 by asodor            #+#    #+#             */
/*   Updated: 2023/09/25 01:48:22 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] < 32)
		{
			ft_putchar('\\');
			ft_putchar((unsigned char)hex[str[i] / 16]);
			ft_putchar((unsigned char)hex[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
