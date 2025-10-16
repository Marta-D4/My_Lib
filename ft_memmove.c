/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:43:54 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/14 11:05:00 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void *src, size_t n)
{
	char	*pd;
	char	*ps;

	if (!dest && !src)
		return (NULL);
	pd = (char *)dest;
	ps = (char *)src;
	if (pd > ps)
	{
		while (n--)
			pd[n] = ps[n];
	}
	else
		return (ft_memcpy(pd, ps, n));
	return (pd);
}
