/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:04:27 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/07 10:44:54 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_cont;
	size_t	dst_len;

	dst_cont = ft_strlen(dst);
	dst_len = dst_cont;
	while (src[dst_cont - dst_len] != '\0' && dst_cont + 1 < size)
	{
		dst[dst_cont] = src[dst_cont - dst_len];
		dst_cont++;
	}
	if (dst_len < size)
		dst[dst_cont] = 0;
	return (dst_len + ft_strlen(src));
}
