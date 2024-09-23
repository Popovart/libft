/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrii <dmitrii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:19:04 by dmitrii           #+#    #+#             */
/*   Updated: 2024/09/23 16:28:36 by dmitrii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*strdup(const char *s)
{
	char	*dest;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
