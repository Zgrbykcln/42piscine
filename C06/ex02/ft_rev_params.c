/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:17:54 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/28 14:42:23 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	argc;
	int	i;

	argc = ac - 1;
	i = 0;
	while (argc > 0)
	{
		while (av[argc][i] != '\0')
		{
			write (1, &av[argc][i], 1);
			i++;
		}
		i = 0;
		argc--;
		write (1, "\n", 1);
	}
	return (0);
}
