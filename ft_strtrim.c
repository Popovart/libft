/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrypopov <dmitrypopov@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:37:47 by dmitrypopov       #+#    #+#             */
/*   Updated: 2024/09/24 13:27:31 by dmitrypopov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

int	is_in_set(char const *set, int c)
{
	while (*set)
	{
		if (*set == (char)c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(set, s1[end - 1]))
		end--;
	len = end - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_memmove(result, s1 + start, len);
	result[len] = '\0';
	return (result);
}
