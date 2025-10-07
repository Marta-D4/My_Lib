/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 13:20:15 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/07 13:57:00 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	x;

	x = 0;
	if (!s)
		return (NULL);
	while (x < len)
	{
		tmp[x] = s[start];
		start++;
		x++;
	}
	tmp[x] = 0;
	return (ft_strdup(tmp));
}
