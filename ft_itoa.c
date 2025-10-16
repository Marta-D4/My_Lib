/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:01:52 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/09 15:12:34 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	x;

	x = 0;
	if (n < 0)
	{
		n *= -1;
		x++;
	}
	while (n != 0)
	{
		n /= 10;
		x++;
	}
	return (x);
}

static char	*ft_conv(char *str, long int nb, int x)
{
	while (nb != 0)
	{
		str[x--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			x;
	long int	nb;

	nb = n;
	x = ft_numlen(nb);
	if (nb == 0)
	{
		str = ft_calloc(2, sizeof(char));
		if (!str)
			return (0);
		str[0] = '0';
		return (str);
	}
	str = ft_calloc(x + 1, sizeof(char));
	if (!str)
		return (0);
	str[x--] = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str = ft_conv(str, nb, x);
	return (str);
}
