/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 12:00:39 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/16 11:36:00 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;
	size_t	x;

	tmp = s;
	x = 0;
	while (x < n)
	{
		tmp[x] = c;
		x++;
	}
	return (s);
}

/*Escribe n bytes de valor c en el string s
tmp = s --> convertimos el ptr generico a uno de tipo char *
while (x < n) --> escribe el byte c en cada posicion n de memoria
return (s) --> devuelve el puntero original
EJ: char buffer[5]; ft_memset(buffer, 'X', sizeof(buffer));
	--> buffer[5] = ['x', 'x', 'x', 'x', 'x'];
*/
