/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:10:58 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/20 01:40:09 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[b] != '\0')
	{
		b++;
	}
	if (size != 0)
	{
		size -= 1;
		while (src[a] != '\0' && (a < size))
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (b);
}
