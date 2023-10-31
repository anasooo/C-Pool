/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asodor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:08:41 by asodor            #+#    #+#             */
/*   Updated: 2023/10/01 05:18:29 by asodor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[0][i] != '\0' && ac)
	{
		write (1, &av[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
