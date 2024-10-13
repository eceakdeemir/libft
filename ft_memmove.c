/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecakdemi <ecakdemi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:53:01 by ecakdemi          #+#    #+#             */
/*   Updated: 2024/10/12 12:09:16 by ecakdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, len));
	else
	{
		while (len--)
			((char *)dest)[len] = ((char *)src)[len];
	}
	return (dest);
}
