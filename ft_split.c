/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrypopov <dmitrypopov@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:28:17 by dmitrypopov       #+#    #+#             */
/*   Updated: 2024/09/25 23:46:26 by dmitrypopov      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_sep(char c, char sep)
{
	return (c == sep);
}

size_t	ft_countwords(const char *s, char sep)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && ft_is_sep(s[i], sep))
			i++;
		if (s[i] && !ft_is_sep(s[i], sep))
		{
			words++;
			while (s[i] && !ft_is_sep(s[i], sep))
				i++;
		}
	}
	return (words);
}

char	*extract_word(const char *s, size_t start, size_t len)
{
	return (ft_substr(s, start, len));
}

char	**ft_split(char const *s, char sep)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**result;

	i = 0;
	j = 0;
	start = -1;
	result = (char **)malloc((ft_countwords(s, sep) + 1) * sizeof(char *));
	if (!result || !s)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (!ft_is_sep(s[i], sep) && start < 0)
			start = i;
		else if ((ft_is_sep(s[i], sep) || s[i] == '\0') && start >= 0)
		{
			result[j++] = extract_word(s, start, i - start);
			start = -1;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}
