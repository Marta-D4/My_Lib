/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:15:07 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/07 10:56:09 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*str1;
	unsigned char	*str2;

	x = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (x < n)
	{
		if (str1[x] != str2[x])
			return (str1[x] - str2[x]);
		x++;
	}
	return (0);
}

/*Compara los primeros n bytes de dos bloques de memoria y
devuelve el valor (+/-) dependiendo de la diff.
str1 = (unsigned char *)s1; -- pq los void* necesitan ser un 
	tipo especifico
if (n == 0) -- si no hay nada que comparar retorna NULL
if (str1[x] != str2[x]) -- cuando son diferentes devuelve la diff
*/
