/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:44:48 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/09 12:24:49 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int	x;
	int	y;

	if (!s1 || !set || s1[0] == '\0')
		return (ft_strdup(""));
	x = 0;
	y = ft_strlen(s1) - 1;
	while (s1[x] && ft_strchr(set, (int)s1[x]))
		x++;
	while (s1[y] && ft_strrchr(set, (int)s1[y]))
		y--;
	if (y < x)
		return (ft_strdup(""));
	return (ft_substr(s1, x, y - x + 1));
}
