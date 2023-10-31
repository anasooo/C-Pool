/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:44:23 by asodor            #+#    #+#             */
/*   Updated: 2023/09/16 17:31:29 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nbr >= 0 && nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
		ft_putnbr(nbr);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr (nbr % 10);
	}
}
