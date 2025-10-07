/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:38:31 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/03 13:00:43 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[x] != '\0' && x < size -1)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = 0;
	return (ft_strlen(src));
}
