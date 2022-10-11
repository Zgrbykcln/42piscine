/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:49:00 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/14 15:19:31 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazma(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			yazma(a / 10 + 48);
			yazma(a % 10 + 48);
			yazma(' ');
			yazma(b / 10 + 48);
			yazma(b % 10 + 48);
			if ((a / 10 != 9) || (a % 10 != 8))
			{
				yazma(',');
				yazma(' ');
			}
			b++;
		}
		a++;
	}
}
