/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 04:38:05 by asodor            #+#    #+#             */
/*   Updated: 2023/09/17 14:07:12 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	i;
	int	t;

	i = 0;
	s = size - 1;
	while (i < s)
	{
		t = tab[i];
		tab[i] = tab[s];
		tab[s] = t;
		i++;
		s--;
	}
}
