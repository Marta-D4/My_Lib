/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:16:00 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/06 12:12:42 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	x;
	char			cc;

	x = ft_strlen(s) - 1;
	cc = (char) c;
	while (0 <= x)
	{
		if (s[x] == c)
			return ((char *)&s[x]);
		x--;
	}
	if (s[x] == cc)
		return ((char *)&s[x]);
	return (NULL);
}
