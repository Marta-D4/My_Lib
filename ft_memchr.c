/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 13:05:21 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/16 16:12:19 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*str;
	unsigned char	cc;

	x = 0;
	str = (unsigned char *)s;
	cc = (unsigned char) c;
	while (x < n)
	{
		if (str[x] == cc)
			return ((void *)&str[x]);
		x++;
	}
	return (0);
}

/*Busca la primera aparición de c dentro de los primeros 
n bytes del bloque de memoria apuntado por s. Si lo encuentra
devuelve un ptr a su posicion, si no NULL.
*/