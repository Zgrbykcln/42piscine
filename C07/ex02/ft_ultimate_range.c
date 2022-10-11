/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:15:40 by obuyukce          #+#    #+#             */
/*   Updated: 2022/03/02 16:25:16 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	num;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	num = max - min;
	*range = (int *)malloc(sizeof(int) * num);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < num)
	{
		(*range)[i] = min + i;
		i++;
	}	
	return (num);
}
