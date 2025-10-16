/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:16:00 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/16 13:00:24 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen(s);
	while (0 <= x)
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x--;
	}
	return (NULL);
}

/*Busca la aparicion de c en s, devuelve un puntero
a su ultima aparicion, si no encuentra retorna NULL.
while (0 <= x) --> recorremos de der a izq, si encuentra
	c devuelve su posicion, si no sigue
return (NULL); --> si no encuentra c 
*/