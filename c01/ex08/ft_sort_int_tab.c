/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:31:23 by asodor            #+#    #+#             */
/*   Updated: 2023/09/17 21:30:40 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	s;
	int	i;
	int	j;

	i = 0;
	s = size - 1;
	while (i < s)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				swap (&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
