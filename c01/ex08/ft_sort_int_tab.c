/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:40:58 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/16 11:45:58 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size - 1)
	{
		if (tab[a] > tab[a + 1])
		{
			b = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = b;
			a = -1;
		}
		a++;
	}
}
