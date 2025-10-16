/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madiaz-e <madiaz-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:49:02 by madiaz-e          #+#    #+#             */
/*   Updated: 2025/10/14 13:42:26 by madiaz-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		x;
	int		y;
	char	*tmp;

	x = 0;
	y = 0;
	tmp = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (s1[x])
		tmp[y++] = s1[x++];
	x = 0;
	while (s2[x])
		tmp[y++] = s2[x++];
	tmp[y] = 0;
	return (tmp);
}
