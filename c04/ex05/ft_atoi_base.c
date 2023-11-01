/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:30:14 by asodor            #+#    #+#             */
/*   Updated: 2023/09/28 13:20:36 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
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

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\f' || *str == '\v')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9' )
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int		nb;
	int		r;
	int		s;

	s = 1;
	r = 0;
	nb = ft_atoi(str);
	if (valide(base) == 1)
	{
		if (nb < 0)
		{
			s *= -1;
			nb *= -1;
		}
		if (nb < len(base))
		{
			r = r * 10 + value_of(base[nb]);
		}
	}
	return (r * s);
}
