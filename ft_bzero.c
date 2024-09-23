/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrii <dmitrii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:57:33 by dmitrii           #+#    #+#             */
/*   Updated: 2024/09/23 16:40:13 by dmitrii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*start_ptr;
	size_t			i;

	start_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		start_ptr[i] = 0;
		i++;
	}
}
