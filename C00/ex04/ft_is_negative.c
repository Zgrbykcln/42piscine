/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:05:07 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/14 15:13:43 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	eksi;
	char	arti;

	eksi = 'N';
	arti = 'P';
	if (n >= 0)
	{
		write (1, &arti, 1);
	}
	if (n < 0)
	{
		write (1, &eksi, 1);
	}
}
