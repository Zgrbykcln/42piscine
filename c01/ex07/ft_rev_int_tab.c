/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:31:30 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/16 11:37:49 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	sayac;
	int	temp;

	sayac = 0;
	while (sayac <= size - 1)
	{
		temp = tab[sayac];
		tab[sayac] = tab[size - 1];
		tab[size - 1] = temp;
		sayac++;
		size--;
	}
}
