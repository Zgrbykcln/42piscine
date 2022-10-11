/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:23:18 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/15 17:37:41 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bolum;
	int	kalan;

	if (*b != 0)
	{
		bolum = (*a) / (*b);
		kalan = (*a) % (*b);
		*a = bolum;
		*b = kalan;
	}
}
