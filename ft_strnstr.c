/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:59:21 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/07 11:37:43 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!little[0])
		return ((char *)big);
	while (big[x] && x < len)
	{
		while ((big[x + y] == little[y]) && big[x + y] && ((x + y) < len))
		{
			y++;
			if (little[y] == 0)
				return ((char *)big + x);
		}
		x++;
		y = 0;
	}
	return (0);
}
