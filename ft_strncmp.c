/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:24:13 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/16 13:07:27 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
		return (0);
	while ((s1[x] || s2[x]) && x < n)
	{
		if ((unsigned char)s1[x] != (unsigned char)s2[x])
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		x++;
	}
	return (0);
}

/*Compara n bytes entre dos cadenas
if (n == 0) --> si no compara nada devuelve 0
while ((s1[x] || s2[x]) && x < n) --> mientras que al menos una de las 
	cadenas no termine. Cast unsigned char para que no de problemas de
	negativos, si son diferentes se retorna la diff entre s1 y s2.
return (0); --> si no hay diff retorna 0
*/