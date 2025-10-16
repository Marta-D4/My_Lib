/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:51:27 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/16 13:00:21 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x++;
	}
	if (s[x] == (char)c)
		return ((char *)&s[x]);
	return (NULL);
}

/* Busca la aparicion de c en s, devuelve un puntero
a su primera aparicion, si no encuentra retorna NULL.
while (s[x]) --> recorremos la cadena, si encuentra c devuelve un
	puntero a su posicion en s, si no sigue
if (s[x] == (char)c) --> llega al final y compara si \0==c, devuelve
	un puntero a su posicion si es el caso.
return (NULL); --> si no encuentra c
*/