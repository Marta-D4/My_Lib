/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:43:54 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/16 12:03:06 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
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

/*Como memcpy pero copia de forma segura, detecta si hay solapamiento
	y copia en la direccion correcta para evitar sobrescribir datos
pd = (char *)dest --> casteamos de void* a char*
if (pd > ps) --> copiamos de atras a delante (control solapamiento)
	while (n--) --> de atras hasta 0
else --> si no hay solapamiento usamos memcpy(izq a der)
return (pd) --> devolvemos el puntero al destino
EJ: char buffer[] = "ABCDEFG"; ft_memmove(buffer+2, buffer, 4);
	--> buffer[] = "ABABCDG";
*/