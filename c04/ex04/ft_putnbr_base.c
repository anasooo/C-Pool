/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:29:54 by asodor            #+#    #+#             */
/*   Updated: 2023/09/27 01:33:01 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_duplicate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (i < len(base) - 1)
	{
		j = i + 1;
		while (j < len(base))
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	valide(char *base)
{
	int	i;

	i = 0;
	if ((len(base) < 2) || (base[i] == '\0') || check_duplicate(base))
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	nb;

	nb = nbr;
	len_base = len(base);
	if (valide(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len_base)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= len_base)
		{
			ft_putnbr_base(nb / len_base, base);
			ft_putnbr_base(nb % len_base, base);
		}
	}
	return ;
}
