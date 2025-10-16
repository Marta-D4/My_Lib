/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:04:27 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/14 12:06:30 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	dst_len;
	size_t	src_len;

	x = 0;
	dst_len = 0;
	src_len = 0;
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len == size)
		return (src_len + size);
	while (src[x] && (dst_len + x + 1) < size)
	{
		dst[dst_len + x] = src[x];
		x++;
	}
	dst[dst_len + x] = '\0';
	return (src_len + dst_len);
}
