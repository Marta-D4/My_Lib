/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:04:27 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/16 12:39:16 by madiaz-e         ###   ########.fr       */
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

/*Concatena src al final de dst, devuelve el tamaño de la 
	cadena que intentó crear
Recorremos dst y src para contar sus longitudes
if (dst_len == size) --> si dst ocupa el tamaño disponible, no
	concatenamos y devolvemos que que intentó construir.
while (src[x] && (dst_len + x + 1) < size) --> copiamos src a dst,
	la segunda condicion asegura que siempre quede espacio para NULL
return (src_len + dst_len); --> tamaño original de dst + tamaño src
EJ: char buffer[10] = "Hola"; 
	size_t res = strlcat(buffer, " Mundo", sizeof(buffer));
	--> buffer = "Hola Mund"; res = 11;
*/