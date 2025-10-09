/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:15:35 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/08 11:46:19 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*tmp;

	x = 0;
	tmp = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (x < ft_strlen(s))
	{
		tmp[x] = (*f)(x, &s[x]);
		x++;
	}
	tmp[x] = 0;
	return (tmp);
}
