/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrii <dmitrii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:20:56 by dmitrii           #+#    #+#             */
/*   Updated: 2024/09/24 15:55:07 by dmitrii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
