/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:08:10 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/20 17:40:39 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	sayac;

	i = 0;
	sayac = 0;
	while (dest[sayac])
	{
		sayac++;
	}
	while (src[i])
	{
		dest[sayac] = src[i];
		sayac++;
		i++;
	}
	dest[sayac] = '\0';
	return (dest);
}
