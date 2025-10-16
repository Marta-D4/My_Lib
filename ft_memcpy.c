/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:56:44 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/16 11:45:27 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	if (!src && !dest)
		return (0);
	while (x < n)
	{
		((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return (dest);
}

/* Copia n bytes de memoria desde src a dest
if (!src && !dest) --> no copia si los dos son nulos
while (x < n) --> copia byte*byte desde src a dest
	hace casteo pq void * no puede indexarse y unsigned char 
	trabaja sin problemas con valores entre 0 y 255
return (dest) --> retorna el puntero a dest
EJ: char src[] = "Hola Mundo"; char dst[20];
	ft_memcpy(dst, src, strlen(src)+1)
	--> dst[20] = "Hola Mundo";
*/