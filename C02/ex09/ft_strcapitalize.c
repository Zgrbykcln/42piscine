/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obuyukce <obuyukce@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:22:32 by obuyukce          #+#    #+#             */
/*   Updated: 2022/02/19 18:07:46 by obuyukce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (b == 0 && (str[a] >= 'a' && str[a] <= 'z'))
		{
			str[a] -= 32;
			b++;
		}
		else if (b > 0 && str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		else if (str[a] < '0' || (str[a] > '9' && str[a] < 'A')
			|| (str[a] > 'Z' && str[a] < 'a') || str[a] > 'z')
			b = 0;
		else
			b++;
		a++;
	}
	return (str);
}
